#include "ClassTwo.h"

namespace CppDLLDemo
{

ClassTwo::ClassTwo()
{
	vartwo = 2;
}


//ClassTwo::~ClassTwo()
//{
//}


void ClassTwo::SetVar(int val)
{
	vartwo = val;
}

int ClassTwo::GetVar()
{
	return vartwo;
}

}
