//	4. Test Scores #2

/*	Modify the program of Programming Challenge 2 to allow the user to enter name-score
	pairs. For each student taking a test, the user types the student�s name followed by the
	student�s integer test score. Modify the sorting function so it takes an array holding the
	student names and an array holding the student test scores. When the sorted list of
	scores is displayed, each student�s name should be displayed along with his or her score.
	In stepping through the arrays, use pointers rather than array subscripts.
*/

#include <iostream>

#include <cstring>

using namespace std;

// Function Prototype
void sortArray(char[][21], int[], int);
int main() {
    char names[5][21];
    int marks[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter Name of Student " << i + 1 << ": ";
        cin >> names[i];
        cout << "Enter Score of Student " << i + 1 << ": ";
        cin >> marks[i];
        while (marks[i] < 0 || marks[i] > 100) {
            cout << "ERROR: Score must be in 0 to 100. ";
            cin >> marks[i];
        }
    }

    sortArray(names, marks, 5);

    cout << "\n\n";
    for (int i = 0; i < 5; i++) {
        cout << names[i] << ": " << marks[i] << endl;
    }

    cout << "\n\n\n";

    return 0;
}

void sortArray(char nm[][21], int score[], int size) {
    int startScan, minIndex, minValue;

    for (startScan = 0; startScan < (size - 1); startScan++) {
        minIndex = startScan;
        minValue = score[startScan];
        char tempName[21];
        strcpy_s(tempName, nm[startScan]);

        for (int index = startScan + 1; index < size; index++) {
            if (minValue > score[index]) {
                strcpy_s(tempName, nm[index]);
                minIndex = index;
                minValue = score[index];
            }
        }

        score[minIndex] = score[startScan];
        score[startScan] = minValue;
        strcpy_s(nm[minIndex], nm[startScan]);
        strcpy_s(nm[startScan], tempName);
    }
}