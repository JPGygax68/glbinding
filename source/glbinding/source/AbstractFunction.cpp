
#include <glbinding/AbstractFunction.h>

#include <memory>
#include <set>
#include <cassert>
#include <type_traits>

#include <glbinding/Binding.h>
#include <glbinding/BindingES.h>
#include <glbinding/Meta.h>

#include "callbacks_private.h"

namespace
{
THREAD_LOCAL int t_pos = -1;
}

namespace glbinding 
{

int AbstractFunction::s_maxpos = -1;

AbstractFunction::State::State()
: address(nullptr)
, initialized(false)
, callbackMask(CallbackMask::None)
{
}

bool AbstractFunction::hasState() const
{
    return hasState(t_pos);
}

bool AbstractFunction::hasState(const int pos) const
{
    return pos > -1 && s_maxpos <= pos;
}

AbstractFunction::State & AbstractFunction::state() const
{
    return state(t_pos);
}

AbstractFunction::State & AbstractFunction::state(const int pos) const
{
    assert(s_maxpos >= pos);
    assert(pos > -1);

    return m_states[pos];
}

void AbstractFunction::provideState(const int pos)
{
    assert(pos > -1);

    // if a state at pos exists, it is assumed to be neglected before
    if (s_maxpos < pos)
    {
        auto glFunctions = Binding::functions();
        for (AbstractFunction * function : glFunctions)
            function->m_states.resize(static_cast<std::size_t>(pos + 1));

        auto glesFunctions = BindingES::functions();
        for (AbstractFunction * function : glesFunctions)
            function->m_states.resize(static_cast<std::size_t>(pos + 1));

        s_maxpos = pos;
    }
}

void AbstractFunction::neglectState(const int pos)
{
    assert(pos <= s_maxpos);
    assert(pos > -1);

    if (pos == s_maxpos)
    {
        for (AbstractFunction * function : Binding::functions())
        {
            function->m_states.resize(static_cast<std::size_t>(std::max(0, pos - 1)));
        }

        for (AbstractFunction * function : BindingES::functions())
        {
            function->m_states.resize(static_cast<std::size_t>(std::max(0, pos - 1)));
        }

        --s_maxpos;
    }
    else
    {
        for (AbstractFunction * function : Binding::functions())
        {
            function->m_states[pos] = State();
        }

        for (AbstractFunction * function : BindingES::functions())
        {
            function->m_states[pos] = State();
        }
    }

    if (pos == t_pos)
        t_pos = -1;
}

void AbstractFunction::setStatePos(const int pos)
{
    t_pos = pos;
}


AbstractFunction::AbstractFunction(const char * _name)
: m_name(_name)
{
}

AbstractFunction::~AbstractFunction()
{
}

void AbstractFunction::resolveAddress()
{
    if (state().initialized)
        return;

    state().address = getProcAddressES(m_name);
    state().initialized = true;
}

const std::set<gl::GLextension> & AbstractFunction::extensions() const
{
    return Meta::getExtensionsRequiring(m_name);
}

const char * AbstractFunction::name() const
{
    return m_name;
}

bool AbstractFunction::isResolved() const
{
    return state().address != nullptr;
}

ProcAddress AbstractFunction::address() const
{
    if (!state().initialized)
        const_cast<AbstractFunction*>(this)->resolveAddress();

    return state().address;
}


bool AbstractFunction::isEnabled(const CallbackMask mask) const
{
    using callback_mask_t = std::underlying_type<CallbackMask>::type;
    
    return (static_cast<callback_mask_t>(state().callbackMask) 
        & static_cast<callback_mask_t>(mask)) == static_cast<callback_mask_t>(mask);
}

bool AbstractFunction::isAnyEnabled(const CallbackMask mask) const
{   
    using callback_mask_t = std::underlying_type<CallbackMask>::type;
    
    return (static_cast<callback_mask_t>(state().callbackMask) 
        ^ static_cast<callback_mask_t>(mask)) != 0;
}

void AbstractFunction::setCallbackMask(const CallbackMask mask)
{
    state().callbackMask = mask;
}


void AbstractFunction::unresolved() const
{
    glbinding::unresolved(this);
}

void AbstractFunction::before(const FunctionCall & call) const
{
    glbinding::before(call);
}
void AbstractFunction::after(const FunctionCall & call) const
{
    glbinding::after(call);
}

} // namespace glbinding
