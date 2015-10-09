#include <iostream>
using namespace std;

#include "ClassOne.h"
#include "ClassTwo.h"
using namespace CppDLLDemo;

int main()
{
	ClassOne one;
	cout << "defualt value for class one: " << one.GetVar() << endl;
	one.SetVar(1000);
	cout << "set value for class one: " << one.GetVar() << endl;
	
	cout << "Hello DLL" << endl;

	//char temp[1];
	//cin >> temp;

	cin.get();

	return 0;

}