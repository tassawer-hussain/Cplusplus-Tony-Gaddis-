//	14. Overloaded Hospital

/*	Write a program that computes and displays the charges for a patient�s hospital stay.
	First, the program should ask if the patient was admitted as an in-patient or an outpatient.
	If the patient was an in-patient, the following data should be entered:
	� The number of days spent in the hospital
	� The daily rate
	� Hospital medication charges
	� Charges for hospital services (lab tests, etc.)

	The program should ask for the following data if the patient was an out-patient:
	� Charges for hospital services (lab tests, etc.)
	� Hospital medication charges
	The program should use two overloaded functions to calculate the total charges. One
	of the functions should accept arguments for the in-patient data, while the other function
	accepts arguments for out-patient information. Both functions should return the total charges.

	Input Validation: Do not accept negative numbers for any data.
*/


#include <iostream>
#include <cctype>
using namespace std;

// Function Prototype
double totalCharges(const int &, const double &, const double &, const double &);
double totalCharges(const double &, const double &);

int main() {
	char patient_status;
	int days;
	double daily_charges, med_charges, hos_charges, total_bill;

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
	
		cout<<"\n\n\n\t\tPatient Reports";
		cout<<"\nPatient Status: Out-Patient";
		cout<<"\nHospital Charges: "<<hos_charges;
		cout<<"\nMedical Charges: "<<med_charges;
		cout<<"\nTotal Charges: "<<total_bill;
		cout<<"\n\n";
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
	
		cout<<"\n\n\n\t\tPatient Reports";
		cout<<"\nPatient Status: In-Patient";
		cout<<"\nDays Stay: "<<days;
		cout<<"\nDaily Charges: "<<daily_charges;
		cout<<"\nHospital Charges: "<<hos_charges;
		cout<<"\nMedical Charges: "<<med_charges;
		cout<<"\nTotal Charges: "<<total_bill;
		cout<<"\n\n";
	}

	return 0;
}

double totalCharges(const int & d, const double & dc, const double & hc, const double & mc) {
	return d*dc+hc+mc;
}
double totalCharges(const double & hc, const double & mc) {
	return hc+mc;
}
