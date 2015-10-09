// PointerToPointerDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Student.h"

void BuildStudent(CStudent *stu)
{
	stu = new CStudent;
	stu->Name = "BuildStudent";
	stu->Age = 100;
}

void BuildStudentByPointer(CStudent **stu)
{
	*stu = new CStudent;
	(*stu)->Name = "BuildStudentByPointer";
	(*stu)->Age = 200;
}

void Modify(CStudent *stu)
{
	stu->Name = "Modified";
	stu->Age = 300;

	stu = new CStudent();
}

/* un comment-out this to see the compiling error
void Modify1(const CStudent *stu)
{
	stu->Name = "Modified";
	stu->Age = 300;

	stu = new CStudent();
}

void Modify2(CStudent * const stu)
{
	stu->Name = "Modified";
	stu->Age = 300;

	stu = new CStudent();
}

void Modify2(const CStudent * const stu)
{
	stu->Name = "Modified";
	stu->Age = 300;

	stu = new CStudent();
}

*/

int _tmain(int argc, _TCHAR* argv[])
{
	CStudent *s = new CStudent;
	s->Show();

	CStudent *s2 = NULL;
	BuildStudent(s2);
	if (s2)
	{
		s2->Show();
	}else
	{
		std::cout << "s2 is not initialized"<<std::endl;
	}


	CStudent *s3 = NULL;
	BuildStudentByPointer(&s3);
	if (s3)
	{
		s3->Show();
	}
	else
	{
		std::cout << "s3 is not initialized"<<std::endl;
	}

	CStudent *s4 = new CStudent;
	Modify(s4);
	s4->Show();


	char temp[5];
	std::cin >> temp;

}



