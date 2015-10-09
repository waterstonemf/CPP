#include "stdafx.h"
#include "Student.h"
#include <iostream>


CStudent::CStudent()
{
	Name = "Blank Name";
	Age = 1;
}


CStudent::~CStudent()
{
}


void CStudent::Show()
{
	std::cout << "Name is :" << Name << ",Age is :" << Age << std::endl;
}