#pragma once
namespace CppDLLDemo
{
	class ClassTwo
	{
	private:
		int vartwo;
	public:
		__declspec(dllexport) ClassTwo();
		__declspec(dllexport) void SetVar(int val);
		__declspec(dllexport) int GetVar();
		//~ClassTwo();
	};
}

