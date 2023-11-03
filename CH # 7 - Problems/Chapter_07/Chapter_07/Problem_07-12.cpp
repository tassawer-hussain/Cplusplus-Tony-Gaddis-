//	12. Exam Grader

/*	One of your professors has asked you to write a program to grade her ﬁnal exams,
	which consist of only 20 multiple-choice questions. Each question has one of four
	possible answers: A, B, C, or D. The ﬁle
	CorrectAnswers.txt, which is on the Student CD, contains the correct answers for all of the questions, each answer written on
	a separate line. The ﬁrst line contains the answer to the ﬁrst question, the second line
	contains the answer to the second question, and so forth.
	Write a program that reads the contents of the CorrectAnswers.txt ﬁle into a one-dimensional
	char array, and then reads the contents of another ﬁle, containing a student’s answers, into a second char array.
	
	The Student CD has a ﬁle named StudentAnswers.txt that you can use for testing purposes. The program should
	determine the number of questions that the student missed, and then display	the following:
	• A list of the questions missed by the student, showing the correct answer and the
		incorrect answer provided by the student for each missed question
	• The total number of questions missed
	• The percentage of questions answered correctly. This can be calculated as
		Correctly Answered Questions ÷ Total Number of Questions
	• If the percentage of correctly answered questions is 70% or greater, the program should indicate
		that the student passed the exam. Otherwise, it should indicate that the student failed the exam.
*/


#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char correctAnswer[20], studentAnswer[20];
	int correct=0, missed=0, wronglist[20];
	
	int j=0;

	ifstream f1,f2;
	f1.open("CorrectAnswers.txt");
	f2.open("StudentAnswers.txt");
	if(!f1 || !f2) {
		cout<<"File is not opened. Programme is going to terminated.\n\n";
		return 0;
	}

	for (int i=0; i<20; i++)
	{
		f1.get(correctAnswer[i]); // read single character
		f1.ignore(); // ignore the enter character to read the 2nd answer
		f2.get(studentAnswer[i]);
		f2.ignore();

		if(correctAnswer[i] == studentAnswer[i])
			correct++;
		else if(int(studentAnswer[i]) == 32) // ASCII for space is 32 
			missed++;
		else {
			wronglist[j] = i+1;
			j++;
		}

	//	while( !((int)user_ans[i]>=65 && (int)user_ans[i]<=68)) {
	//		cout<<"ERROR: Invalid Option. Enter A, B, C or D only: ";
	//		cin>>user_ans[i];
	//	}
	}
	cout<<"Correct Answers: ";
	for (int i=0; i<20; i++)
	{
		cout<<correctAnswer[i]<<", ";
	}
	cout<<"\nStudent Answers: ";
	for (int i=0; i<20; i++)
	{
		cout<<studentAnswer[i]<<", ";
	}


	if((correct/20.0)*100 >= 70.0)
		cout<<"\n\nYou have Passed the Test.";
	else
		cout<<"\n\nYou have Failed the Test.";

	cout<<"\nNo. of Correct Answer: "<<correct;
	cout<<"\nNo. of Missed Answer: "<<missed;
	cout<<"\nNo. of Wrong Answer: "<<20-correct-missed;
	cout<<"\nWrong Question Are: ";

	for (int i=0; i<j; i++) {
		cout<<wronglist[i]<<", ";
	}
	cout<<"\n\n";

	f1.close();
	f2.close();

	return 0;
}
