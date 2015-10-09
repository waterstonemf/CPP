#pragma once
namespace CppDLLDemo
{
	class ClassOne
	{
	private:
		int varone;
	public:
		__declspec(dllexport) ClassOne();
		__declspec(dllexport) void SetVar(int val);
		__declspec(dllexport) int GetVar();
		//~ClassOne();
	};
}

