//	11. Star Search

/*	A particular talent competition has ﬁve judges, each of whom awards a score between
	0 and 10 to each performer. Fractional scores, such as 8.3, are allowed. A performer’s
	ﬁnal score is determined by dropping the highest and lowest score received, then averaging
	the three remaining scores. Write a program that uses this method to calculate a contestant’s
	score. It should include the following functions:

	• void getJudgeData() should ask the user for a judge’s score, store it in a reference
	parameter variable, and validate it. This function should be called by main once for each of the ﬁve judges.

	• void calcScore() should calculate and display the average of the three scores that remain after dropping
	the highest and lowest scores the performer received. This function should be called just once by
	main, and should be passed the ﬁve scores.

	The last two functions, described below, should be called by calcScore, which uses
	the returned information to determine which of the scores to drop.

	• int findLowest() should find and return the lowest of the ﬁve scores passed to it.
	• int findHighest() should find and return the highest of the ﬁve scores passed to it.

	Input Validation: Do not accept judge scores lower than 0 or higher than 10.
*/


#include <iostream>
using namespace std;

// Function Prototype
void getJudgeData(double &);
void calcScore(double &, double &, double &, double &, double &);
double findLowest(double &, double &, double &, double &, double &);
double findHighest(double &, double &, double &, double &, double &);

int main() {
	double score1, score2, score3, score4, score5;

	getJudgeData(score1);
	getJudgeData(score2);
	getJudgeData(score3);
	getJudgeData(score4);
	getJudgeData(score5);
	
	cout<<"\n\n\nScore 1: "<<score1;
	cout<<"\nScore 2: "<<score2;
	cout<<"\nScore 3: "<<score3;
	cout<<"\nScore 4: "<<score4;
	cout<<"\nScore 5: "<<score5;

	calcScore(score1, score2, score3, score4, score5);
	return 0;
}

void getJudgeData(double & score) {
	cout<<"Enter Score: ";
	cin>>score;
	while (score<0.0 || score>10.0) {
		cout<<"Invalid Score. Enter Again: ";
		cin>>score;
	}
}

void calcScore(double & a, double & b, double & c, double & d, double & e) {
	double sum = a+b+c+d+e;
	double lowest = findLowest(a,b,c,d,e);
	double highest = findHighest(a,b,c,d,e);
	sum = sum - lowest - highest; // Lowest return will be subtract from the total Sum
	cout<<"\n\nLowest: "<<lowest;
	cout<<"\nHighest: "<<highest;
	cout<<"\n\nAverage of the Score by ignoring lowest "<<lowest<<" and highest "<<highest<<" is "<<sum/3.0<<endl<<endl;
}

double findLowest(double & a, double & b, double & c, double & d, double & e) {
	if(a<b && a<c && a<d && a<e)
		return a;
	else if(b<a && b<c && b<d && b<e)
		return b;
	else if(c<b && c<a && c<d && c<e)
		return c;
	else if(d<b && d<c && d<a && d<e)
		return d;
	else
		return e;
}

double findHighest(double & a, double & b, double & c, double & d, double & e) {
	if(a>b && a>c && a>d && a>e)
		return a;
	else if(b>a && b>c && b>d && b>e)
		return b;
	else if(c>b && c>a && c>d && c>e)
		return c;
	else if(d>b && d>c && d>a && d>e)
		return d;
	else
		return e;
}
