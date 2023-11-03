/*
	15. Personal Best
	Write a program that asks for the name of a pole vaulter and the dates and vault
	heights (in meters) of the athlete�s three best vaults. It should then report, in order of
	height (best first), the date on which each vault was made and its height.
	
	Input Validation: Only accept values between 2.0 and 5.0 for the heights.
*/


#include <iostream>
using namespace std;

int main()
{
	char name[50];
	double height1, height2, height3;
	char date1[15],date2[15], date3[15];

	cout<<"Enter the name of Pole Vaulter: ";
	cin.getline(name,50);
	
	cout<<"Enter heights of 1st vault: ";
	cin>>height1;
	while(height1<2.0 || height1>5.0)
	{
		cout<<"Error MSG!\nHeight must be between 2.0 t0 5.0\nPlease enter the height again.";
		cin>>height1;
	}
	cin.ignore();
	cout<<"Enter the Date of 1st Vaults: ";
	cin.getline(date1,15);

	cout<<"Enter heights of 2nd vault: ";
	cin>>height2;
	while(height2<2.0 || height2>5.0)
	{
		cout<<"Error MSG!\nHeight must be between 2.0 t0 5.0\nPlease enter the height again.";
		cin>>height2;
	}
	cin.ignore();
	cout<<"Enter the Date of 2nd Vaults: ";
	cin.getline(date2,15);

	cout<<"Enter heights of 3rd vault: ";
	cin>>height3;
	while(height3<2.0 || height3>5.0)
	{
		cout<<"Error MSG!\nHeight must be between 2.0 t0 5.0\nPlease enter the height again.";
		cin>>height3;
	}
	cin.ignore();
	cout<<"Enter the Date of 3rd Vaults: ";
	cin.getline(date3,15);


	if(height1>height2 && height1>height3)
	{
		cout<<endl<<name<<endl;
		cout<<"Best One Vault: "<<height1<<" metre.\n";
		cout<<"On "<<date1<<endl;
		if(height2>height3)
		{
			cout<<"Best second Vault: "<<height2<<" metre.\n";
			cout<<"On "<<date2<<endl;
			cout<<"Best third Vault: "<<height3<<" metre.\n";
			cout<<"On "<<date3<<endl;
		}
		else
		{
			cout<<"Best second Vault: "<<height3<<" metre.\n";
			cout<<"On "<<date3<<endl;
			cout<<"Best third Vault: "<<height2<<" metre.\n";
			cout<<"On "<<date2<<endl;
		}
	}
	else if(height2>height1 && height2>height3)
	{
		cout<<endl<<name<<endl;
		cout<<"Best One Vault: "<<height2<<" metre.\n";
		cout<<"On "<<date2<<endl;
		if(height1>height3)
		{
			cout<<"Best second Vault: "<<height1<<" metre.\n";
			cout<<"On "<<date1<<endl;
			cout<<"Best third Vault: "<<height3<<" metre.\n";
			cout<<"On "<<date3<<endl;
		}
		else
		{
			cout<<"Best second Vault: "<<height3<<" metre.\n";
			cout<<"On "<<date3<<endl;
			cout<<"Best third Vault: "<<height1<<" metre.\n";
			cout<<"On "<<date1<<endl;
		}
	}
	else
	{
		cout<<endl<<name<<endl;
		cout<<"Best One Vault: "<<height3<<" metre.\n";
		cout<<"On "<<date3<<endl;
		if(height2>height1)
		{
			cout<<"Best second Vault: "<<height2<<" metre.\n";
			cout<<"On "<<date2<<endl;
			cout<<"Best third Vault: "<<height1<<" metre.\n";
			cout<<"On "<<date1<<endl;
		}
		else
		{
			cout<<"Best second Vault: "<<height1<<" metre.\n";
			cout<<"On "<<date1<<endl;
			cout<<"Best third Vault: "<<height2<<" metre.\n";
			cout<<"On "<<date2<<endl;
		}
	}
		
		return 0;
}
