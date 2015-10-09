#include "ClassOne.h"

namespace CppDLLDemo
{

ClassOne::ClassOne()
{
	varone = 1;
}


//ClassOne::~ClassOne()
//{
//}

void ClassOne::SetVar(int val)
{
	varone = val;
}

int ClassOne::GetVar()
{
	return varone;
}

}
