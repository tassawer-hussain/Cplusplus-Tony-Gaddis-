// 10. Lowest Score Drop

/* Write a program that calculates the average of a group of test scores, where the lowest
	score in the group is dropped. It should use the following functions:

	� void getScore() should ask the user for a test score, store it in a reference
	parameter variable, and validate it. This function should be called by main once
	for each of the five scores to be entered.

	� void calcAverage() should calculate and display the average of the four highest
	scores. This function should be called just once by main, and should be passed the five scores.

	� double findLowest() should find and return the lowest of the five scores passed to
	it. It should be called by calcAverage, which uses the function to determine which
	of the five scores to drop.

	Input Validation: Do not accept test scores lower than 0 or higher than 100.
*/


#include <iostream>
using namespace std;

// Function Prototype
void getScore(double &);
void calcAverage(double &, double &, double &, double &, double &);
double findLowest(double &, double &, double &, double &, double &);

int main() {
	double score1, score2, score3, score4, score5;

	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);
	
	cout<<"\n\n\nNum 1: "<<score1;
	cout<<"\nNum 2: "<<score2;
	cout<<"\nNum 3: "<<score3;
	cout<<"\nNum 4: "<<score4;
	cout<<"\nNum 5: "<<score5;

	calcAverage(score1, score2, score3, score4, score5);
	return 0;
}

void getScore(double & score) {
	cout<<"Enter Score: ";
	cin>>score;
	while (score<0 || score>100) {
		cout<<"Invalid Score. Enter Again: ";
		cin>>score;
	}
}

void calcAverage(double & a, double & b, double & c, double & d, double & e) {
	double sum = a+b+c+d+e;
	double lowest = findLowest(a,b,c,d,e);
	sum = sum - lowest; // Lowest return will be subtract from the total Sum
	cout<<"\n\nAverage of the number by ignoring lowest "<<lowest<<" is "<<sum/4.0<<endl<<endl;
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
