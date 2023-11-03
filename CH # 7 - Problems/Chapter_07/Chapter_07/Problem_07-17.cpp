//	17. Tic-Tac-Toe Game

/*	Write a program that allows two players to play a game of tic-tac-toe. Use a twodimensional char
	array with three rows and three columns as the game board. Each element of the array should be initialized
	with an asterisk (*). The program should run a loop that

	� Displays the contents of the board array
	� Allows player 1 to select a location on the board for an X. The program should
	  ask the user to enter the row and column number.
	� Allows player 2 to select a location on the board for an O. The program should ask the user to enter
	  the row and column number.
	� Determines whether a player has won, or a tie has occurred. If a player has won, the program should declare
	that player the winner and end. If a tie has occurred, the program should say so and end.

	Player 1 wins when there are three Xs in a row on the game board. The Xs can appear in a row, in a column, or diagonally
	across the board. A tie occurs when all of the locations on the board are full, but there is no winner.
*/


#include <iostream>
using namespace std;

// Const Declaration
const int ROW = 3;
const int COLUMN =3;

// Function Prototype
void displayBoard(char b[][COLUMN]);
bool gameStatus(char b[][COLUMN]);
void markValue(char b[][COLUMN], int, int, char);
bool alreadyMark(char b[][COLUMN], int,int);
void takeInput(int &, int &);

int main() {
	char board[3][3], player1, player2;
	int row, col, fillPos=0; // to hold row and column index to mark value


	for(int i=0; i<ROW; i++) {
		for(int j=0; j<COLUMN; j++)
			board[i][j] = '*';
	}

	cout<<"\t\tWelCome to Tic Tac Game ";
	cout<<"\nPlayer 1 choose character X or O: ";
	cin>>player1;
	while(player1 != 'X' && player1 != 'O')
	{
		cout<<"ERROR: Select either X or O only. ";
		cin>>player1;
	}

	if(player1 == 'X')
		player2 = 'O';
	else
		player2 = 'X';

	bool turn=true;

	do{
		displayBoard(board);
		
		if (turn) {
			cout<<"\n\nPlayer 1 Turn";
			turn = false;
		}
		else {
			cout<<"\n\nPlayer 2 Turn:";
			turn = true;
		}

		takeInput(row, col);
		fillPos++;
		while(alreadyMark(board, row-1, col-1)) {
			cout<<"\nRow "<<row<<"\nColumn "<<col<<" already mark. Choose another location. ";
			takeInput(row, col);
		}

		if (!turn)
			markValue(board,row-1,col-1,player1);
		else
			markValue(board,row-1,col-1,player2);

	} while(!gameStatus(board) && fillPos<9);
	
	if(gameStatus(board) || !gameStatus(board))
		displayBoard(board);

	if(!turn && gameStatus(board))
		cout<<"\n\nPlayer 1 whose character is "<<player1<<" Wins\n\n";
	else if (turn && gameStatus(board))
		cout<<"\n\nPlayer 2 whose character is "<<player2<<" Wins\n\n";
	else
		cout<<"\n\nGame is Draw.\n\n";

	return 0;
}

void displayBoard(char b[][COLUMN]) {
	for(int i=0; i<ROW; i++) {
		cout<<"\t";
		for(int j=0; j<COLUMN; j++) {
			cout<<"  "<<b[i][j];
			if(j+1<COLUMN)
				cout<<"  |";
		}
		cout<<endl;
		if(i+1<ROW)
			cout<<"\t  -------------\n";
	}
}

bool gameStatus(char b[][COLUMN]) {
	if(b[0][0]==b[1][0] && b[1][0]==b[2][0] && (b[0][0]=='X' || b[0][0]=='O'))
		return true;
	else if(b[0][1]==b[1][1] && b[1][1]==b[2][1] && (b[0][1]=='X' || b[0][1]=='O'))
		return true;
	else if(b[0][2]==b[1][2] && b[1][2]==b[2][2] && (b[0][2]=='X' || b[0][2]=='O'))
		return true;
	else if(b[0][0]==b[0][1] && b[0][1]==b[0][2] && (b[0][0]=='X' || b[0][0]=='O'))
		return true;
	else if(b[1][0]==b[1][1] && b[1][1]==b[1][2] && (b[1][0]=='X' || b[1][0]=='O'))
		return true;
	else if(b[2][0]==b[2][1] && b[2][1]==b[2][2] && (b[2][0]=='X' || b[2][0]=='O'))
		return true;
	else if(b[0][0]==b[1][1] && b[1][1]==b[2][2] && (b[0][0]=='X' || b[0][0]=='O'))
		return true;
	else if(b[0][2]==b[1][1] && b[1][1]==b[2][0] && (b[0][2]=='X' || b[0][2]=='O'))
		return true;
	else
		return false;
}

void markValue(char b[][COLUMN], int r, int c, char ch) {
	b[r][c] = ch;
}

bool alreadyMark(char b[][COLUMN], int r, int c) {
	if(b[r][c] == 'X' || b[r][c] == 'O')
		return true;
	else 
		return false;
}

void takeInput(int & r, int & c) {
	cout<<"\nEnter Row: ";
	cin>>r;
	while(r<1 || r>3){
		cout<<"ERROR: Enter only 1, 2 or 3. ";
		cin>>r;
	}
	cout<<"Enter Column: ";
	cin>>c;
	while(c<1 || c>3){
		cout<<"ERROR: Enter only 1, 2 or 3. ";
		cin>>c;
	}
}
