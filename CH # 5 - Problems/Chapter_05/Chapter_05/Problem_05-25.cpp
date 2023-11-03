//	25. Using Files—Student Line Up

/*	Modify the Student Line Up program described in Programming Challenge 14 so that
	it gets the names from a data ﬁle. Names should be read in until there is no more data
	to read. Data to test your program can be found in the
	LineUp.dat ﬁle.
*/


#include <iostream>
#include <cstring>
#include <cctype>
#include <fstream>
using namespace std;

int mian()
{
	
	ifstream fin;
	fin.open("Problem_05-25.txt");

	int totalStd;
	char student[15], fStudent[15]="" , lStudent[15]="";

	if(!fin) {
		cout<<"ERROR: File is not open.";
		return 0;
	}

	// Read Number of Student
	fin>>totalStd;
	
	for(int i=0; i<totalStd; i++)
	{
		cout<<"Read student "<<i+1<<" name: ";
		fin>>student;

		if(strcmp(student,fStudent)<0)
			strcpy(fStudent,student);

		if(strcmp(student,lStudent)>0)
			strcpy(lStudent,student);
	}


	cout<<"\n1st Student: "<<fStudent;
	cout<<"\nLast Student: "<<lStudent;

	return 0;
}
