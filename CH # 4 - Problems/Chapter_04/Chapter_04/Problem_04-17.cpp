/*
	17. Spectral Analysis
	If a scientist knows the wavelength of an electromagnetic wave, he or she can determine
	what type of radiation it is. Write a program that asks for the wavelength of an electromagnetic
	wave in meters and then displays what that wave is according to the chart below.
	(For example, a wave with a wavelength of 1E-10 meters would be an X-ray.)

	1 � 10�2		 1 � 10�3		 7 � 10�7		4 � 10�7			1 � 10�8		1 � 10�11  
	Radio Waves		Microwaves		Infrared		Visible Light	   Ultraviolet		  X Rays		Gamma Rays
*/


#include <iostream>
using namespace std;

int main()
{
	double wavelength;
	cout<<"Enter Waelength of an electromagnetic wave: ";
	cin>>wavelength;

	if(wavelength >= 1e-2)
	{
		cout<<"\n\nWavelength: "<<wavelength;
		cout<<"\nIt is a Radio Wave.\n\n";	
	}
	else if(wavelength >= 1e-3)
	{
		cout<<"\n\nWavelength: "<<wavelength;
		cout<<"\nIt is a MicroWave.\n\n";	
	}
	else if(wavelength >= 7e-7)
	{
		cout<<"\n\nWavelength: "<<wavelength;
		cout<<"\nIt is an Infrared.\n\n";	
	}
	else if(wavelength >= 4e-7)
	{
		cout<<"\n\nWavelength: "<<wavelength;
		cout<<"\nIt is a Visible Light.\n\n";	
	}
	else if(wavelength >= 1e-8)
	{
		cout<<"\n\nWavelength: "<<wavelength;
		cout<<"\nIt is an UltraViolet.\n\n";	
	}
	else if(wavelength >= 1e-11)
	{
		cout<<"\n\nWavelength: "<<wavelength;
		cout<<"\nIt is a X-Rays.\n\n";	
	}
	else
	{
		cout<<"\n\nWavelength: "<<wavelength;
		cout<<"\nIt is a Gamma Rays.\n\n";	
	}

	return 0;
}
