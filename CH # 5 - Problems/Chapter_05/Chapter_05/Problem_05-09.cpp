/*
	9. Hotel Occupancy
	Write a program that calculates the occupancy rate for a hotel. The program should
	start by asking the user how many floors the hotel has. A loop should then iterate
	once for each floor. In each iteration, the loop should ask the user for the number of
	rooms on the floor and how many of them are occupied. After all the iterations, the
	program should display how many rooms the hotel has, how many of them are occupied,
	how many are unoccupied, and the percentage of rooms that are occupied. The
	percentage may be calculated by dividing the number of rooms occupied by the number
	of rooms.

	Input Validation: Do not accept a value less than 1 for the number of floors. Do not
	accept a number less than 10 for the number of rooms on a floor.

	NOTE: It is traditional that most hotels do not have a thirteenth floor. The loop in this
	program should skip the entire thirteenth iteration.
*/


#include <iostream>
using namespace std;

int main()
{
	int totalRoom=0, occupaid=0, floor, fRoom, oRoom;

	cout<<"How many floors the hotel has: ";
	cin>>floor;
	while(floor<1)
	{
		cout<<"Error MSG!\nFloor must be greather then 0.\nPlease Enter Again: ";
		cin>>floor;
	}

	for(int i=1; i<=floor; i++)
	{
		if (i%13 ==0)
		{
			continue;
		}
		else
		{
			cout<<"\nNumber of Rooms on floor "<<i<<" : ";
			cin>>fRoom;
			if(fRoom<10)
			{
				cout<<"\nError MSG!\nRoom on any floor must be atleast 10.\nEnter Again: ";
				cin>>fRoom;
			}
			totalRoom += fRoom;

			cout<<"How many of them are occupied: ";
			cin>>oRoom;
			if(oRoom>fRoom)
			{
				cout<<"\nError MSG!\nOccupied Room on any floor must be equal to or less then total room on floor.\nEnter Again: ";
				cin>>oRoom;
			}
			occupaid += oRoom;
		}
	}

	cout<<"\n\nTotal Rooms in Hotel: "<<totalRoom;
	cout<<"\nOccupied Rooms: "<<occupaid;
	cout<<"\nUnoccupied Rooms: "<<totalRoom - occupaid;
	cout<<"\nPercentage of Occupied Rooms: "<<(static_cast<double>(occupaid)/totalRoom) * 100;
	cout<<"\n\n";
	
	return 0;
}
