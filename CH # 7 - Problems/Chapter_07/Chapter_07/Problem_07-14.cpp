//	14. Grade Book Modiﬁcation

/*	Modify the grade book application in Programming Challenge 13 so it drops each
	student’s lowest score when determining the test score averages and letter grades.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	char stdNames[5][35], grade[5];
	double score[5][4], sum, avg[5], min;

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
		min = score[i][0];
		for(int j=0; j<4; j++) {
			sum = sum + score[i][j];
			if(min>score[i][j])
				min = score[i][j];
		}
		sum -= min;
		avg[i] = sum/3.0;

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
