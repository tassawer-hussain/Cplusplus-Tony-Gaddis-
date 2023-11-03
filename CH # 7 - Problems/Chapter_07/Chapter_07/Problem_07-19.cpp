//															Group Project
//	19. Theater Seating

/*	This program should be designed and written by a team of students. Here are some suggestions:
	� One student should design function main, which will call the other functions in the program.
	The remainder of the functions will be designed by other members of the team.
	� The requirements of the program should be analyzed so each student is given about the same work load.
	� The parameters and return types of each function should be decided in advance.
	� The program can be implemented as a multi-file program, or all the functions can be cut and pasted into the main file.

	Here is the assignment: Write a program that can be used by a small theater to sell tickets for performances.
	The theater�s auditorium has 15 rows of seats, with 30 seats in each row. The program should display a screen
	that shows which seats are available and which are taken. For example, the following screen shows a chart depicting
	each seat in the theater. Seats that are taken are represented by an * symbol, and seats that are available are represented
	by a # symbol:	
							Seats
				123456789012345678901234567890
	Row 1		***###***###*########*****####
	Row 2		####*************####*******##
	Row 3		**###**********########****###
	Row 4		**######**************##******
	Row 5		********#####*********########
	Row 6		##############************####
	Row 7		#######************###########
	Row 8		************##****############
	Row 9		#########*****############****
	Row 10		#####*************############
	Row 11		#**********#################**
	Row 12		#############********########*
	Row 13		###***********########**######
	Row 14		##############################
	Row 15		##############################
	
	Here is a list of tasks this program must perform:
	� When the program begins, it should ask the user to enter the seat prices for each
	row. The prices can be stored in a separate array. (Alternatively, the prices may be read from a file.)
	� Once the prices are entered, the program should display a seating chart similar to the one shown above.
	The user may enter the row and seat numbers for tickets being sold. Every time a ticket or group of tickets is purchased,
	the program should display the total ticket prices and update the seating chart.
	� The program should keep a total of all ticket sales. The user should be given an option of viewing this amount.
	� The program should also give the user an option to see a list of how many seats have been sold, how many seats are
	available in each row, and how many seats are available in the entire auditorium.

	Input Validation: When tickets are being sold, do not accept row or seat numbers that do not exist.
	When someone requests a particular seat, the program should make sure that seat is available before it is sold.
*/


#include <iostream>
using namespace std;

// Const Declaration
const int ROW = 15, COLUMN =30;
int totalReserved=0, unreserved=450;
double totalAmountEarn=0;

// Function Prototype
void displaySeatingPlan(char [][COLUMN]);
void takeSeatPrice(double []);
void showSeatPrice(double []);
void takeInputToBookSeat(int &, int &);
void bookSeat(char [][COLUMN], double [], int, int);
void takeInputToBookMultipleSeats(int &, int &, int &);
void bookMultipleSeats(char [][COLUMN], double [], int, int, int);
bool alreadyBooked(char [][COLUMN], int, int);
void showReport(char [][COLUMN]);
int showMenu();

int main() {
	char seats[ROW][COLUMN];
	double price[ROW];
	int rowIndex,colIndex, noOfSeats, choice;

	takeSeatPrice(price);

	for(int i=0; i<ROW; i++) {
		for(int j=0; j<COLUMN; j++)
			seats[i][j] = '#';
	}

	displaySeatingPlan(seats);
	cout<<"\n\n";
	choice = showMenu();

	do {
		switch (choice) {
			case 1:
				displaySeatingPlan(seats);
				break;
			
			case 2:
				showSeatPrice(price);
				break;

			case 3:
				takeInputToBookSeat(rowIndex, colIndex);
				while(alreadyBooked(seats, rowIndex-1, colIndex-1)) {
					cout<<"\nThat seat is already boked. Select another.";
					takeInputToBookSeat(rowIndex, colIndex);
				}
				bookSeat(seats, price, rowIndex-1, colIndex-1);
				break;

			case 4:
				takeInputToBookMultipleSeats(rowIndex, colIndex, noOfSeats);
				bookMultipleSeats(seats, price, rowIndex-1, colIndex-1, noOfSeats);
				break;

			case 5:
				showReport(seats);
				break;		
		}
		choice = showMenu();

	} while(choice != 6);
	cout<<"\n\n";
	return 0;
}

int showMenu() {
	int ch;
	cout<<"\n\tWel Come to Menu";
	cout<<"\nChoose a number 1 to 6";
	cout<<"\n1. Show Theater Seating Plan Graph";
	cout<<"\n2. Show Price List of Rows";
	cout<<"\n3. Book a seat";
	cout<<"\n4. Book Multiple Seats";
	cout<<"\n5. Show Report";
	cout<<"\n6. Quit";
	cout<<"\nYour Choice: ";
	cin>>ch;
	while(ch<1 || ch>6) {
		cout<<"ERROR: Invalid option no selected. Select Again: ";
		cin>>ch;
	}
	return ch;
}

void displaySeatingPlan(char b[][COLUMN]) {
	cout<<"\n\t\t\t\t\t Seats\n";
	cout<<"\t   1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0\n";
	for(int i=0; i<ROW; i++) {
		cout<<"Row "<<i+1<<":\t   ";
		for(int j=0; j<COLUMN; j++) {
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}

void takeInputToBookSeat(int & r, int & c) {
	cout<<"\nEnter Row In which you want to have a seat: ";
	cin>>r;
	while(r<1 || r>15){
		cout<<"ERROR: Enter only 1 to 15. ";
		cin>>r;
	}
	cout<<"Enter Seat number in Row "<< r<<": ";
	cin>>c;
	while(c<1 || c>30){
		cout<<"ERROR: Enter only 1 to 30. ";
		cin>>c;
	}
}

void bookSeat(char b[][COLUMN], double pri[], int r, int c) {
	double price = pri[r];
	totalAmountEarn += price;

	b[r][c] = '*';
	totalReserved++;
	unreserved--;

	cout<<"\nYour Seat is booked.\nYour Bill: $"<<price;
}

void takeInputToBookMultipleSeats(int & r, int & c, int & count) {
	cout<<"Enter How many Seats you want to book: ";
	cin>>count;
	while(count<1 || count>450){
		cout<<"ERROR: Enter only 1 to 450. ";
		cin>>count;
	}
	cout<<"Enter Row In which you want to have seats: ";
	cin>>r;
	while(r<1 || r>15){
		cout<<"ERROR: Enter only 1 to 15. ";
		cin>>r;
	}
	cout<<"Enter Starting Seat number in Row "<<r<<": ";
	cin>>c;
	while(c<1 || c>30){
		cout<<"ERROR: Enter only 1 to 30. ";
		cin>>c;
	}
}

void bookMultipleSeats(char seat[][COLUMN], double pri[], int r, int c, int seatCount) {
	double price=0.0;

	for(int i=0; i<seatCount; i++) {
		if(c+i<30) {
			if(!alreadyBooked(seat,r,c+i)) {
				price += pri[r];
				seat[r][c+i] = '*';
				totalReserved++;
				unreserved--;
			}
			else {
				cout<<"\nNOTE: In Row "<<r+1<<"  seat # "<<c+i+1<<" already reserved.\nYou get another seat next to it.";
				seatCount++;
			}
		}
		else {
			seatCount -= i;
			r++;
			c=0;
			i=-1;
		}
	}

	totalAmountEarn += price;
	cout<<"\nYour Seats are booked.\nYour Bill: $"<<price;
}

bool alreadyBooked(char b[][COLUMN], int r, int c) {
	if(b[r][c] == '*')
		return true;
	else 
		return false;
}

void takeSeatPrice(double pri[]) {
	for(int i=0; i<ROW; i++) {
		cout<<"Enter Price for seats in Row "<<i+1<<": ";
		cin>>pri[i];
		while (pri[i]<0) {
			cout<<"ERROR: Price cannot be less than $0. Enter Again: ";
			cin>>pri[i];
		}
	}
}

void showSeatPrice(double pri[]) {
	cout<<"\n\n";
	for(int i=0; i<ROW; i++) {
		cout<<"Price for seats in Row "<<i+1<<": $"<<pri[i]<<endl;
	}
}

void showReport(char seat[][COLUMN]) {
	cout<<"\n\n\n\t\tReport";
	cout<<"\nTotal seats Sold: "<<totalReserved;
	cout<<"\nTotal seats unsold: "<<unreserved;
	cout<<"\nTotal Amount Earn: "<<totalAmountEarn<<endl;

	int unsold;
	for(int i=0; i<ROW; i++) {
		unsold=0;
		cout<<"\nUnsold Seats in Row "<<i+1<<": ";
		for(int j=0; j<COLUMN; j++) {
			if(seat[i][j] == '#')
				unsold++;
		}
		cout<<unsold;
	}
	cout<<"\n\n";
}
