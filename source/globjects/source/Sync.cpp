
#include <globjects/Sync.h>

#include <glbinding/gl/functions.h>
#include <glbinding/gl/enum.h>
#include <glbinding/gl/bitfield.h>
#include <glbinding/gl/values.h>

#include <globjects/DebugMessage.h>


using namespace gl;


namespace globjects
{


std::unique_ptr<Sync> Sync::fence(const GLenum condition)
{
    return fence(condition, GL_UNUSED_BIT);
}

std::unique_ptr<Sync> Sync::fence(const GLenum condition, const UnusedMask flags)
{
    return Sync::create(fenceSync(condition, flags));
}

Sync::Sync(GLsync sync)
: m_sync(sync)
, m_objectLabelState(nullptr)
{
#ifdef GLOBJECTS_CHECK_GL_ERRORS
    if (m_sync == nullptr)
    {
        DebugMessage::insertMessage(
            gl::GL_DEBUG_SOURCE_APPLICATION,
            gl::GL_DEBUG_TYPE_ERROR,
            0,
            gl::GL_DEBUG_SEVERITY_NOTIFICATION,
            "Sync object could not be created"
        );
    }
#endif
}

Sync::~Sync()
{
    glDeleteSync(m_sync);
}

GLsync Sync::fenceSync(const GLenum condition, const UnusedMask flags)
{
    return glFenceSync(condition, static_cast<gl::GLbitfield>(flags));
}

GLsync Sync::sync() const
{
    return m_sync;
}

GLenum Sync::clientWait(const SyncObjectMask flags, const GLuint64 timeout)
{
    return glClientWaitSync(m_sync, flags, timeout);
}

void Sync::wait(const GLuint64 timeout)
{
    wait(GL_UNUSED_BIT, timeout);
}

void Sync::wait(const UnusedMask flags, const GLuint64 timeout)
{
    glWaitSync(m_sync, static_cast<gl::GLbitfield>(flags), timeout);
}

void Sync::get(const GLenum pname, const GLsizei bufsize, GLsizei * length, GLint * values)
{
    glGetSynciv(m_sync, pname, bufsize, length, values);
}

GLint Sync::get(const GLenum pname)
{
    GLint result = 0;
    get(pname, sizeof(result), nullptr, &result);

    return result;
}


} // namespace globjects
