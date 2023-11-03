/*
	14. Student Line Up
	A teacher has asked all her students to line up single file according to their first name.
	For example, in one class Amy will be at the front of the line and Yolanda will be at
	the end. Write a program that prompts the user to enter the number of students in the
	class, then loops to read in that many names. Once all the names have been read in it
	reports which student would be at the front of the line and which one would be at the
	end of the line. You may assume that no two students have the same name.

	Input Validation: Do not accept a number less than 1 or greater than 25 for the number
	of students.
*/

#include <iostream>
#include <cstring>
using namespace std;

int mian()
{
	int totalStd;
	char student[15], fStudent[15]="" , lStudent[15]="";

	cout<<"Enter Number of Student: ";
	cin>>totalStd;
	while(totalStd<1 || totalStd>25)
	{
		cout<<"Error MSG!\nStudent must be in the Range 1 to 25.\nPlease Enter again: ";
		cin>>totalStd;
	}
	
	for(int i=1; i<=totalStd; i++)
	{
		cout<<"Enter student name: ";
		cin>>student;

	//	if(strcmp(student,fStudent)<0)
		//	strcpy(fStudent,student);

		//if(strcmp(student,lStudent)>0)
		//	strcpy(lStudent,student);
	
	}

	cout<<"\n1st Student: "<<fStudent;
	cout<<"\nLast Student: "<<lStudent;

	return 0;
}
