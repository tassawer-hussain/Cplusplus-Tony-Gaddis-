//	11. Driver’s License Exam

/*	The local Driver’s License Ofﬁce has asked you to write a program that grades the
	written portion of the driver’s license exam. The exam has 20 multiple choice questions.
	Here are the correct answers:
		1. B		6. A		11. B		16. C
		2. D		7. B		12. C		17. C
		3. A		8. A		13. D		18. B
		4. A		9. C		14. A		19. D
		5. C		10.	D		15. D		20. A
	
	Your program should store the correct answers shown above in an array. It should ask
	the user to enter the student’s answers for each of the 20 questions, and the answers
	should be stored in another array. After the student’s answers have been entered, the
	program should display a message indicating whether the student passed or failed the
	exam. (A student must correctly answer 15 of the 20 questions to pass the exam.)
	It should then display the total number of correctly answered questions, the total
	number of incorrectly answered questions, and a list showing the question numbers of
	the incorrectly answered questions.
	Input Validation: Only accept the letters A, B, C, or D as answers.
*/


#include <iostream>
using namespace std;

int main() {
	char answer[20] = {'B', 'D', 'A', 'A', 'C',
						'A', 'B', 'A', 'C',	'D',	
						'B', 'C', 'D', 'A', 'D',	
						'C', 'C', 'B', 'D', 'A'};

	char user_ans[20];
	int correct=0, wronglist[20];
	
	int j=0;
	cout<<"Enter Answer Options One by One\n";
	for (int i=0; i<20; i++)
	{
		cout<<"Question "<<i+1<<": ";
		cin>>user_ans[i];
		while( !((int)user_ans[i]>=65 && (int)user_ans[i]<=68)) {
			cout<<"ERROR: Invalid Option. Enter A, B, C or D only: ";
			cin>>user_ans[i];
		}

		if(user_ans[i] == answer[i])
			correct++;
		else {
			wronglist[j] = i+1;
			j++;
		}
	}
	if(correct >=15)
		cout<<"\n\nYou have Passed the Test.";
	else
		cout<<"\n\nYou have Failed the Test.";

	cout<<"\nNo. of Correct Answer: "<<correct;
	cout<<"\nNo. of Wrong Answer: "<<20-correct;
	cout<<"\nWrong Question Are: ";

	
	for (int i=0; i<j; i++) {
		cout<<wronglist[i]<<", ";
	}
	cout<<"\n\n";
	return 0;
}
