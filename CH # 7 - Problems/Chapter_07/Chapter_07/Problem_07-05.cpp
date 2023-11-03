//	5. Rain or Shine

/*	An amateur meteorologist wants to keep track of weather conditions during the past
	year’s three-month summer season and has designated each day as either rainy (‘R’),
	cloudy (‘C’), or sunny (‘S’). Write a program that stores this information in a 3 × 30
	array of characters, where the row indicates the month (0 = June, 1 = July, 2 = August)
	and the column indicates the day of the month. Note that data are not being collected
	for the 31st of any month. The program should begin by reading the weather data in
	from a ﬁle. Then it should create a report that displays, for each month and for the
	whole three-month period, how many days were rainy, how many were cloudy, and
	how many were sunny. It should also report which of the three months had the largest
	number of rainy days. Data for the program can be found in the RainOrShine.dat ﬁle.
*/


#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char month[3][30];
	int rainy=0, sunny=0, cloudy=0, rainy1=0, rainy2=0, rainy3=0;

	ifstream fin;
	fin.open("Problem_07-05.txt");
	
	if (!fin) {
		cout<<"File is not opened. Programme is terminating";
		return 0;
	}
	else {
		for(int i=0; i<3; i++) {
			for(int j=0; j<30; j++) 
				fin>>month[i][j];
		}
	}

	fin.close();

	for(int i=0; i<3; i++) {
		for(int j=0; j<30; j++) {
			if(month[i][j] == 'R')
				rainy++;
			else if (month[i][j] == 'S')
				sunny++;
			else if (month[i][j] == 'C')
				cloudy++;

			// Not workin properly
			//if (month[0][j] == 'R')
			//	rainy1++;
			//else if(month[1][j] == 'R')
			//	rainy2++;
			//else if(month[2][j] == 'R')
			//	rainy3++;
		}
	}

	for (int i= 0; i<30; i++) {
		if (month[0][i] == 'R')
				rainy1++;
	}

	for (int i= 0; i<30; i++) {
		if (month[1][i] == 'R')
				rainy2++;
	}

	for (int i= 0; i<30; i++) {
		if (month[2][i] == 'R')
				rainy3++;
	}

	cout<<"R1, R2 , R3 "<<rainy1<<", "<<rainy2<<", "<<rainy3<<endl<<endl;
	for(int i=0; i<3; i++) {
		cout<<"Month "<<i+1<<": ";
		for(int j=0; j<30; j++) {
			cout<<month[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"\n\nTotal Rainy Days: "<<rainy;
	cout<<"\nTotal Cloudy Days: "<<cloudy;
	cout<<"\nTotal Sunny Days: "<<sunny;
	

	cout<<"\n\n";

	if(rainy1>rainy2 && rainy1>rainy3)
		cout<<"Month of June has largest number of rainy days: "<<rainy1;
	else if(rainy2>rainy1 && rainy2>rainy3)
		cout<<"Month of July has largest number of rainy days: "<<rainy2;
	else
		cout<<"Month of August has largest number of rainy days: "<<rainy3;
	
	cout<<"\n\n";
	return 0;
}
