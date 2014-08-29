
#include "AbstractProgramBinaryImplementation.h"

#include <globjects/globjects.h>

#include "ProgramBinaryImplementation_GetProgramBinaryARB.h"
#include "ProgramBinaryImplementation_None.h"


using namespace gl;

namespace glo 
{

AbstractProgramBinaryImplementation::AbstractProgramBinaryImplementation()
{
}

AbstractProgramBinaryImplementation::~AbstractProgramBinaryImplementation()
{
}

AbstractProgramBinaryImplementation * AbstractProgramBinaryImplementation::get(const Program::BinaryImplementation impl)
{
    if (impl == Program::BinaryImplementation::GetProgramBinaryARB 
     && hasExtension(GLextension::GL_ARB_get_program_binary))
    {
        return ProgramBinaryImplementation_GetProgramBinaryARB::instance();
    }
    else
    {
        return ProgramBinaryImplementation_None::instance();
    }
}

} // namespace glo
