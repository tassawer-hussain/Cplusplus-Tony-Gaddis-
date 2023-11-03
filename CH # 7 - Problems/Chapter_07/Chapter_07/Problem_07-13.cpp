//	13. Grade Book

/*	A teacher has ﬁve students who have taken four tests. The teacher uses the following
	grading scale to assign a letter grade to a student, based on the average of his or her four test scores.
		Test Score			Letter Grade
		 90–100					A
		 80–89					B
		 70–79				    C
		 60–69					D
		 0–59					F
	Write a program that uses a two-dimensional array of characters to hold the ﬁve student names,
	a single-dimensional array of ﬁve characters to hold the ﬁve students’ letter grades, and ﬁve single-dimensional
	arrays of four doubles to hold each student’s set of test scores. 

	The program should allow the user to enter each student’s name and his or her four
	test scores. It should then calculate and display each student’s average test score and a letter grade based on the average.
	Input Validation: Do not accept test scores less than 0 or greater than 100.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	char stdNames[5][35], grade[5];
	double score[5][4], sum, avg[5];

	for(int i=0; i<5; i++) {
		cout<<"Enter Student "<<i+1<<" Name: ";
		cin.getline(stdNames[i],35);
	}

	cout<<"\n";
	for (int i = 0; i<5; i++) {
		cout<<"\nEnter the scores of "<<stdNames[i]<<"\n";
		for (int j=0; j<4; j++) {
			cout<<"Score "<<j+1<<": ";
			cin>>score[i][j];
			while(score[i][j]<0 || score[i][j]>100) {
				cout<<"ERROR: Score should be 0 to 100. ";
				cin>>score[i][j];
			}
		}
	}

	for(int i=0; i<5; i++) {
		sum=0;
		for(int j=0; j<4; j++) {
			sum = sum + score[i][j];
		}
		avg[i] = sum/4.0;

		if(avg[i]<=59)
			grade[i] = 'F';
		else if (avg[i]<=69)
			grade[i] = 'D';
		else if (avg[i]<=79)
			grade[i] = 'C';
		else if (avg[i]<=89)
			grade[i] = 'B';
		else
			grade[i] = 'A';
	}

	cout<<"\n\n\tName\t\tAverage\t\tGrade\n";
	for(int i=0; i<5; i++) {
		cout<<setw(15)<<stdNames[i]<<setw(5)<<"\t"<<avg[i]<<"\t\t"<<grade[i]<<"\n";
	}

	return 0;
}
