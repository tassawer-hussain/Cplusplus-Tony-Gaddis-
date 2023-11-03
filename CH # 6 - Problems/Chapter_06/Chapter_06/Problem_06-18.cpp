//	18. Using Files—Hospital Report

/*	Modify Programming Challenge 14, Overloaded Hospital, to write the report it cre-
	ates to a ﬁle. Print the contents of the ﬁle to hand in to your instructor.
*/


#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;

// Function Prototype
double totalCharges(const int &, const double &, const double &, const double &);
double totalCharges(const double &, const double &);

int main() {
	char patient_status;
	int days;
	double daily_charges, med_charges, hos_charges, total_bill;

	ofstream fout;
	fout.open("Problem_06-18.txt");

	cout<<"Enter the patient Status.\nI for in-patiens and O for out-patient: ";
	cin>>patient_status;

	while (tolower(patient_status) != 'o' && tolower(patient_status) != 'i') {
		cout<<"ERROR: Enter I for in-patiens and O for out-patient: ";
		cin>>patient_status;
	}

	if(tolower(patient_status) == 'o') {
		cout<<"Enter Charges for Hospital Services: ";
		cin>>hos_charges;
		while (hos_charges<0) {
			cout<<"Erroe: Cannot be negative value. Enter again: ";
			cin>>hos_charges;
		}

		cout<<"Enter Hospital Medication Charges: ";
		cin>>med_charges;
		while (med_charges<0) {
			cout<<"Erroe: Cannot be negative value. Enter again: ";
			cin>>med_charges;
		}

		total_bill = totalCharges(hos_charges, med_charges);
	
		fout<<"\n\n\n\t\tPatient Reports";
		fout<<"\nPatient Status: Out-Patient";
		fout<<"\nHospital Charges: "<<hos_charges;
		fout<<"\nMedical Charges: "<<med_charges;
		fout<<"\nTotal Charges: "<<total_bill;
		fout<<"\n\n";
	}
	else {
		cout<<"Enter number of days spent in the hospital: ";
		cin>>days;
		while (days<0) {
			cout<<"Erroe: Cannot be negative value. Enter again: ";
			cin>>days;
		}
		
		cout<<"Enter The daily rate: ";
		cin>>daily_charges;
		while (daily_charges<0) {
			cout<<"Erroe: Cannot be negative value. Enter again: ";
			cin>>daily_charges;
		}
		
		cout<<"Enter Charges for Hospital Services: ";
		cin>>hos_charges;
		while (hos_charges<0) {
			cout<<"Erroe: Cannot be negative value. Enter again: ";
			cin>>hos_charges;
		}

		cout<<"Enter Hospital Medication Charges: ";
		cin>>med_charges;
		while (med_charges<0) {
			cout<<"Erroe: Cannot be negative value. Enter again: ";
			cin>>med_charges;
		}
	
		total_bill = totalCharges(days, daily_charges, hos_charges, med_charges);
	
		fout<<"\n\n\n\t\tPatient Reports";
		fout<<"\nPatient Status: In-Patient";
		fout<<"\nDays Stay: "<<days;
		fout<<"\nDaily Charges: "<<daily_charges;
		fout<<"\nHospital Charges: "<<hos_charges;
		fout<<"\nMedical Charges: "<<med_charges;
		fout<<"\nTotal Charges: "<<total_bill;
		fout<<"\n\n";
	}
	fout.close();
	return 0;
}

double totalCharges(const int & d, const double & dc, const double & hc, const double & mc) {
	return d*dc+hc+mc;
}
double totalCharges(const double & hc, const double & mc) {
	return hc+mc;
}
