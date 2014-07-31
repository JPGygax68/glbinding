#pragma once

#include <glbinding/glbinding_api.h>

#include <glbinding/gl/nogl.h>

#include <glbinding/gl/types.h>

namespace gl33core
{

#include <glbinding/gl/types.inl>

} // namespace gl33core


#include <glbinding/glbinding.h>

namespace gl33core
{

GLBINDING_API void glActiveTexture(GLenum texture);
GLBINDING_API void glAttachShader(GLuint program, GLuint shader);
GLBINDING_API void glBeginConditionalRender(GLuint id, GLenum mode);
GLBINDING_API void glBeginQuery(GLenum target, GLuint id);
GLBINDING_API void glBeginTransformFeedback(GLenum primitiveMode);
GLBINDING_API void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name);
GLBINDING_API void glBindBuffer(GLenum target, GLuint buffer);
GLBINDING_API void glBindBufferBase(GLenum target, GLuint index, GLuint buffer);
GLBINDING_API void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLBINDING_API void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name);
GLBINDING_API void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);
GLBINDING_API void glBindFramebuffer(GLenum target, GLuint framebuffer);
GLBINDING_API void glBindRenderbuffer(GLenum target, GLuint renderbuffer);
GLBINDING_API void glBindSampler(GLuint unit, GLuint sampler);
GLBINDING_API void glBindTexture(GLenum target, GLuint texture);
GLBINDING_API void glBindVertexArray(GLuint array);
GLBINDING_API void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLBINDING_API void glBlendEquation(GLenum mode);
GLBINDING_API void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
GLBINDING_API void glBlendFunc(GLenum sfactor, GLenum dfactor);
GLBINDING_API void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
GLBINDING_API void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter);
GLBINDING_API void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage);
GLBINDING_API void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data);
GLBINDING_API GLenum glCheckFramebufferStatus(GLenum target);
GLBINDING_API void glClampColor(GLenum target, GLenum clamp);
GLBINDING_API void glClear(ClearBufferMask mask);
GLBINDING_API void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
GLBINDING_API void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value);
GLBINDING_API void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value);
GLBINDING_API void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value);
GLBINDING_API void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLBINDING_API void glClearDepth(GLdouble depth);
GLBINDING_API void glClearStencil(GLint s);
GLBINDING_API GLenum glClientWaitSync(GLsync sync, SyncObjectMask flags, GLuint64 timeout);
GLBINDING_API void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
GLBINDING_API void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
GLBINDING_API void glColorP3ui(GLenum type, GLuint color);
GLBINDING_API void glColorP3uiv(GLenum type, const GLuint * color);
GLBINDING_API void glColorP4ui(GLenum type, GLuint color);
GLBINDING_API void glColorP4uiv(GLenum type, const GLuint * color);
GLBINDING_API void glCompileShader(GLuint shader);
GLBINDING_API void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data);
GLBINDING_API void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data);
GLBINDING_API void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
GLBINDING_API void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
GLBINDING_API void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
GLBINDING_API void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
GLBINDING_API void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLBINDING_API void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
GLBINDING_API void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
GLBINDING_API void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
GLBINDING_API void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLBINDING_API void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLBINDING_API GLuint glCreateProgram();
GLBINDING_API GLuint glCreateShader(GLenum type);
GLBINDING_API void glCullFace(GLenum mode);
GLBINDING_API void glDeleteBuffers(GLsizei n, const GLuint * buffers);
GLBINDING_API void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers);
GLBINDING_API void glDeleteProgram(GLuint program);
GLBINDING_API void glDeleteQueries(GLsizei n, const GLuint * ids);
GLBINDING_API void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers);
GLBINDING_API void glDeleteSamplers(GLsizei count, const GLuint * samplers);
GLBINDING_API void glDeleteShader(GLuint shader);
GLBINDING_API void glDeleteSync(GLsync sync);
GLBINDING_API void glDeleteTextures(GLsizei n, const GLuint * textures);
GLBINDING_API void glDeleteVertexArrays(GLsizei n, const GLuint * arrays);
GLBINDING_API void glDepthFunc(GLenum func);
GLBINDING_API void glDepthMask(GLboolean flag);
GLBINDING_API void glDepthRange(GLdouble near_, GLdouble far_);
GLBINDING_API void glDetachShader(GLuint program, GLuint shader);
GLBINDING_API void glDisable(GLenum cap);
GLBINDING_API void glDisableVertexAttribArray(GLuint index);
GLBINDING_API void glDisablei(GLenum target, GLuint index);
GLBINDING_API void glDrawArrays(GLenum mode, GLint first, GLsizei count);
GLBINDING_API void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
GLBINDING_API void glDrawBuffer(GLenum buf);
GLBINDING_API void glDrawBuffers(GLsizei n, const GLenum * bufs);
GLBINDING_API void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices);
GLBINDING_API void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
GLBINDING_API void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount);
GLBINDING_API void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
GLBINDING_API void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices);
GLBINDING_API void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
GLBINDING_API void glEnable(GLenum cap);
GLBINDING_API void glEnableVertexAttribArray(GLuint index);
GLBINDING_API void glEnablei(GLenum target, GLuint index);
GLBINDING_API void glEndConditionalRender();
GLBINDING_API void glEndQuery(GLenum target);
GLBINDING_API void glEndTransformFeedback();
GLBINDING_API GLsync glFenceSync(GLenum condition, UnusedMask flags);
GLBINDING_API void glFinish();
GLBINDING_API void glFlush();
GLBINDING_API void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length);
GLBINDING_API void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
GLBINDING_API void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level);
GLBINDING_API void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GLBINDING_API void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GLBINDING_API void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
GLBINDING_API void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
GLBINDING_API void glFrontFace(GLenum mode);
GLBINDING_API void glGenBuffers(GLsizei n, GLuint * buffers);
GLBINDING_API void glGenFramebuffers(GLsizei n, GLuint * framebuffers);
GLBINDING_API void glGenQueries(GLsizei n, GLuint * ids);
GLBINDING_API void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers);
GLBINDING_API void glGenSamplers(GLsizei count, GLuint * samplers);
GLBINDING_API void glGenTextures(GLsizei n, GLuint * textures);
GLBINDING_API void glGenVertexArrays(GLsizei n, GLuint * arrays);
GLBINDING_API void glGenerateMipmap(GLenum target);
GLBINDING_API void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
GLBINDING_API void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
GLBINDING_API void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
GLBINDING_API void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
GLBINDING_API void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName);
GLBINDING_API void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);
GLBINDING_API void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders);
GLBINDING_API GLint glGetAttribLocation(GLuint program, const GLchar * name);
GLBINDING_API void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data);
GLBINDING_API void glGetBooleanv(GLenum pname, GLboolean * data);
GLBINDING_API void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params);
GLBINDING_API void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params);
GLBINDING_API void glGetBufferPointerv(GLenum target, GLenum pname, void ** params);
GLBINDING_API void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data);
GLBINDING_API void glGetCompressedTexImage(GLenum target, GLint level, void * img);
GLBINDING_API void glGetDoublev(GLenum pname, GLdouble * data);
GLBINDING_API GLenum glGetError();
GLBINDING_API void glGetFloatv(GLenum pname, GLfloat * data);
GLBINDING_API GLint glGetFragDataIndex(GLuint program, const GLchar * name);
GLBINDING_API GLint glGetFragDataLocation(GLuint program, const GLchar * name);
GLBINDING_API void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params);
GLBINDING_API void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data);
GLBINDING_API void glGetInteger64v(GLenum pname, GLint64 * data);
GLBINDING_API void glGetIntegeri_v(GLenum target, GLuint index, GLint * data);
GLBINDING_API void glGetIntegerv(GLenum pname, GLint * data);
GLBINDING_API void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val);
GLBINDING_API void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
GLBINDING_API void glGetProgramiv(GLuint program, GLenum pname, GLint * params);
GLBINDING_API void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params);
GLBINDING_API void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params);
GLBINDING_API void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params);
GLBINDING_API void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params);
GLBINDING_API void glGetQueryiv(GLenum target, GLenum pname, GLint * params);
GLBINDING_API void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params);
GLBINDING_API void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params);
GLBINDING_API void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params);
GLBINDING_API void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params);
GLBINDING_API void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params);
GLBINDING_API void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
GLBINDING_API void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source);
GLBINDING_API void glGetShaderiv(GLuint shader, GLenum pname, GLint * params);
GLBINDING_API const GLubyte * glGetString(GLenum name);
GLBINDING_API const GLubyte * glGetStringi(GLenum name, GLuint index);
GLBINDING_API void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);
GLBINDING_API void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels);
GLBINDING_API void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params);
GLBINDING_API void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params);
GLBINDING_API void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params);
GLBINDING_API void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params);
GLBINDING_API void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params);
GLBINDING_API void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params);
GLBINDING_API void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name);
GLBINDING_API GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName);
GLBINDING_API void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);
GLBINDING_API GLint glGetUniformLocation(GLuint program, const GLchar * name);
GLBINDING_API void glGetUniformfv(GLuint program, GLint location, GLfloat * params);
GLBINDING_API void glGetUniformiv(GLuint program, GLint location, GLint * params);
GLBINDING_API void glGetUniformuiv(GLuint program, GLint location, GLuint * params);
GLBINDING_API void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params);
GLBINDING_API void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params);
GLBINDING_API void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer);
GLBINDING_API void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params);
GLBINDING_API void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params);
GLBINDING_API void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params);
GLBINDING_API void glHint(GLenum target, GLenum mode);
GLBINDING_API GLboolean glIsBuffer(GLuint buffer);
GLBINDING_API GLboolean glIsEnabled(GLenum cap);
GLBINDING_API GLboolean glIsEnabledi(GLenum target, GLuint index);
GLBINDING_API GLboolean glIsFramebuffer(GLuint framebuffer);
GLBINDING_API GLboolean glIsProgram(GLuint program);
GLBINDING_API GLboolean glIsQuery(GLuint id);
GLBINDING_API GLboolean glIsRenderbuffer(GLuint renderbuffer);
GLBINDING_API GLboolean glIsSampler(GLuint sampler);
GLBINDING_API GLboolean glIsShader(GLuint shader);
GLBINDING_API GLboolean glIsSync(GLsync sync);
GLBINDING_API GLboolean glIsTexture(GLuint texture);
GLBINDING_API GLboolean glIsVertexArray(GLuint array);
GLBINDING_API void glLineWidth(GLfloat width);
GLBINDING_API void glLinkProgram(GLuint program);
GLBINDING_API void glLogicOp(GLenum opcode);
GLBINDING_API void * glMapBuffer(GLenum target, GLenum access);
GLBINDING_API void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access);
GLBINDING_API void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount);
GLBINDING_API void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount);
GLBINDING_API void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex);
GLBINDING_API void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords);
GLBINDING_API void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords);
GLBINDING_API void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords);
GLBINDING_API void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords);
GLBINDING_API void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords);
GLBINDING_API void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords);
GLBINDING_API void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords);
GLBINDING_API void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords);
GLBINDING_API void glNormalP3ui(GLenum type, GLuint coords);
GLBINDING_API void glNormalP3uiv(GLenum type, const GLuint * coords);
GLBINDING_API void glPixelStoref(GLenum pname, GLfloat param);
GLBINDING_API void glPixelStorei(GLenum pname, GLint param);
GLBINDING_API void glPointParameterf(GLenum pname, GLfloat param);
GLBINDING_API void glPointParameterfv(GLenum pname, const GLfloat * params);
GLBINDING_API void glPointParameteri(GLenum pname, GLint param);
GLBINDING_API void glPointParameteriv(GLenum pname, const GLint * params);
GLBINDING_API void glPointSize(GLfloat size);
GLBINDING_API void glPolygonMode(GLenum face, GLenum mode);
GLBINDING_API void glPolygonOffset(GLfloat factor, GLfloat units);
GLBINDING_API void glPrimitiveRestartIndex(GLuint index);
GLBINDING_API void glProvokingVertex(GLenum mode);
GLBINDING_API void glQueryCounter(GLuint id, GLenum target);
GLBINDING_API void glReadBuffer(GLenum src);
GLBINDING_API void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
GLBINDING_API void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
GLBINDING_API void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GLBINDING_API void glSampleCoverage(GLfloat value, GLboolean invert);
GLBINDING_API void glSampleMaski(GLuint maskNumber, GLbitfield mask);
GLBINDING_API void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param);
GLBINDING_API void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param);
GLBINDING_API void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param);
GLBINDING_API void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param);
GLBINDING_API void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param);
GLBINDING_API void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param);
GLBINDING_API void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
GLBINDING_API void glSecondaryColorP3ui(GLenum type, GLuint color);
GLBINDING_API void glSecondaryColorP3uiv(GLenum type, const GLuint * color);
GLBINDING_API void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length);
GLBINDING_API void glStencilFunc(GLenum func, GLint ref, GLuint mask);
GLBINDING_API void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask);
GLBINDING_API void glStencilMask(GLuint mask);
GLBINDING_API void glStencilMaskSeparate(GLenum face, GLuint mask);
GLBINDING_API void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
GLBINDING_API void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
GLBINDING_API void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer);
GLBINDING_API void glTexCoordP1ui(GLenum type, GLuint coords);
GLBINDING_API void glTexCoordP1uiv(GLenum type, const GLuint * coords);
GLBINDING_API void glTexCoordP2ui(GLenum type, GLuint coords);
GLBINDING_API void glTexCoordP2uiv(GLenum type, const GLuint * coords);
GLBINDING_API void glTexCoordP3ui(GLenum type, GLuint coords);
GLBINDING_API void glTexCoordP3uiv(GLenum type, const GLuint * coords);
GLBINDING_API void glTexCoordP4ui(GLenum type, GLuint coords);
GLBINDING_API void glTexCoordP4uiv(GLenum type, const GLuint * coords);
GLBINDING_API void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
GLBINDING_API void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
GLBINDING_API void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params);
GLBINDING_API void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params);
GLBINDING_API void glTexParameterf(GLenum target, GLenum pname, GLfloat param);
GLBINDING_API void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params);
GLBINDING_API void glTexParameteri(GLenum target, GLenum pname, GLint param);
GLBINDING_API void glTexParameteriv(GLenum target, GLenum pname, const GLint * params);
GLBINDING_API void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
GLBINDING_API void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode);
GLBINDING_API void glUniform1f(GLint location, GLfloat v0);
GLBINDING_API void glUniform1fv(GLint location, GLsizei count, const GLfloat * value);
GLBINDING_API void glUniform1i(GLint location, GLint v0);
GLBINDING_API void glUniform1iv(GLint location, GLsizei count, const GLint * value);
GLBINDING_API void glUniform1ui(GLint location, GLuint v0);
GLBINDING_API void glUniform1uiv(GLint location, GLsizei count, const GLuint * value);
GLBINDING_API void glUniform2f(GLint location, GLfloat v0, GLfloat v1);
GLBINDING_API void glUniform2fv(GLint location, GLsizei count, const GLfloat * value);
GLBINDING_API void glUniform2i(GLint location, GLint v0, GLint v1);
GLBINDING_API void glUniform2iv(GLint location, GLsizei count, const GLint * value);
GLBINDING_API void glUniform2ui(GLint location, GLuint v0, GLuint v1);
GLBINDING_API void glUniform2uiv(GLint location, GLsizei count, const GLuint * value);
GLBINDING_API void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
GLBINDING_API void glUniform3fv(GLint location, GLsizei count, const GLfloat * value);
GLBINDING_API void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2);
GLBINDING_API void glUniform3iv(GLint location, GLsizei count, const GLint * value);
GLBINDING_API void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2);
GLBINDING_API void glUniform3uiv(GLint location, GLsizei count, const GLuint * value);
GLBINDING_API void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
GLBINDING_API void glUniform4fv(GLint location, GLsizei count, const GLfloat * value);
GLBINDING_API void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
GLBINDING_API void glUniform4iv(GLint location, GLsizei count, const GLint * value);
GLBINDING_API void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
GLBINDING_API void glUniform4uiv(GLint location, GLsizei count, const GLuint * value);
GLBINDING_API void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
GLBINDING_API void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLBINDING_API void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLBINDING_API void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLBINDING_API void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLBINDING_API void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLBINDING_API void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLBINDING_API void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLBINDING_API void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLBINDING_API void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLBINDING_API GLboolean glUnmapBuffer(GLenum target);
GLBINDING_API void glUseProgram(GLuint program);
GLBINDING_API void glValidateProgram(GLuint program);
GLBINDING_API void glVertexAttrib1d(GLuint index, GLdouble x);
GLBINDING_API void glVertexAttrib1dv(GLuint index, const GLdouble * v);
GLBINDING_API void glVertexAttrib1f(GLuint index, GLfloat x);
GLBINDING_API void glVertexAttrib1fv(GLuint index, const GLfloat * v);
GLBINDING_API void glVertexAttrib1s(GLuint index, GLshort x);
GLBINDING_API void glVertexAttrib1sv(GLuint index, const GLshort * v);
GLBINDING_API void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y);
GLBINDING_API void glVertexAttrib2dv(GLuint index, const GLdouble * v);
GLBINDING_API void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y);
GLBINDING_API void glVertexAttrib2fv(GLuint index, const GLfloat * v);
GLBINDING_API void glVertexAttrib2s(GLuint index, GLshort x, GLshort y);
GLBINDING_API void glVertexAttrib2sv(GLuint index, const GLshort * v);
GLBINDING_API void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z);
GLBINDING_API void glVertexAttrib3dv(GLuint index, const GLdouble * v);
GLBINDING_API void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z);
GLBINDING_API void glVertexAttrib3fv(GLuint index, const GLfloat * v);
GLBINDING_API void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z);
GLBINDING_API void glVertexAttrib3sv(GLuint index, const GLshort * v);
GLBINDING_API void glVertexAttrib4Nbv(GLuint index, const GLbyte * v);
GLBINDING_API void glVertexAttrib4Niv(GLuint index, const GLint * v);
GLBINDING_API void glVertexAttrib4Nsv(GLuint index, const GLshort * v);
GLBINDING_API void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
GLBINDING_API void glVertexAttrib4Nubv(GLuint index, const GLubyte * v);
GLBINDING_API void glVertexAttrib4Nuiv(GLuint index, const GLuint * v);
GLBINDING_API void glVertexAttrib4Nusv(GLuint index, const GLushort * v);
GLBINDING_API void glVertexAttrib4bv(GLuint index, const GLbyte * v);
GLBINDING_API void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GLBINDING_API void glVertexAttrib4dv(GLuint index, const GLdouble * v);
GLBINDING_API void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GLBINDING_API void glVertexAttrib4fv(GLuint index, const GLfloat * v);
GLBINDING_API void glVertexAttrib4iv(GLuint index, const GLint * v);
GLBINDING_API void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
GLBINDING_API void glVertexAttrib4sv(GLuint index, const GLshort * v);
GLBINDING_API void glVertexAttrib4ubv(GLuint index, const GLubyte * v);
GLBINDING_API void glVertexAttrib4uiv(GLuint index, const GLuint * v);
GLBINDING_API void glVertexAttrib4usv(GLuint index, const GLushort * v);
GLBINDING_API void glVertexAttribDivisor(GLuint index, GLuint divisor);
GLBINDING_API void glVertexAttribI1i(GLuint index, GLint x);
GLBINDING_API void glVertexAttribI1iv(GLuint index, const GLint * v);
GLBINDING_API void glVertexAttribI1ui(GLuint index, GLuint x);
GLBINDING_API void glVertexAttribI1uiv(GLuint index, const GLuint * v);
GLBINDING_API void glVertexAttribI2i(GLuint index, GLint x, GLint y);
GLBINDING_API void glVertexAttribI2iv(GLuint index, const GLint * v);
GLBINDING_API void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y);
GLBINDING_API void glVertexAttribI2uiv(GLuint index, const GLuint * v);
GLBINDING_API void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z);
GLBINDING_API void glVertexAttribI3iv(GLuint index, const GLint * v);
GLBINDING_API void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z);
GLBINDING_API void glVertexAttribI3uiv(GLuint index, const GLuint * v);
GLBINDING_API void glVertexAttribI4bv(GLuint index, const GLbyte * v);
GLBINDING_API void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w);
GLBINDING_API void glVertexAttribI4iv(GLuint index, const GLint * v);
GLBINDING_API void glVertexAttribI4sv(GLuint index, const GLshort * v);
GLBINDING_API void glVertexAttribI4ubv(GLuint index, const GLubyte * v);
GLBINDING_API void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
GLBINDING_API void glVertexAttribI4uiv(GLuint index, const GLuint * v);
GLBINDING_API void glVertexAttribI4usv(GLuint index, const GLushort * v);
GLBINDING_API void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
GLBINDING_API void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLBINDING_API void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
GLBINDING_API void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLBINDING_API void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
GLBINDING_API void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLBINDING_API void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
GLBINDING_API void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLBINDING_API void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
GLBINDING_API void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer);
GLBINDING_API void glVertexP2ui(GLenum type, GLuint value);
GLBINDING_API void glVertexP2uiv(GLenum type, const GLuint * value);
GLBINDING_API void glVertexP3ui(GLenum type, GLuint value);
GLBINDING_API void glVertexP3uiv(GLenum type, const GLuint * value);
GLBINDING_API void glVertexP4ui(GLenum type, GLuint value);
GLBINDING_API void glVertexP4uiv(GLenum type, const GLuint * value);
GLBINDING_API void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);
GLBINDING_API void glWaitSync(GLsync sync, UnusedMask flags, GLuint64 timeout);

} // namespace gl33core
