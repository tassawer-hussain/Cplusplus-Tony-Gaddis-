//													Group Project
//	24. Travel Expenses

/*	This program should be designed and written by a team of students. Here are some suggestions:

	� One student should design function main, which will call the other functions in
	the program. The remainder of the functions will be designed by other members of the team.
	� The requirements of the program should be analyzed so each student is given about the same work load.
	� The parameters and return types of each function should be decided in advance.
	� Stubs and drivers should be used to test and debug the program.
	� The program can be implemented as a multifile program, or all the functions can be cut and pasted into the main file.
	
	Here is the assignment: Write a program that calculates and displays the total travel expenses of a businessperson on a trip.
	The program should have functions that ask for and return the following:
	� The total number of days spent on the trip
	� The time of departure on the first day of the trip, and the time of arrival back home on the last day of the trip
	� The amount of any round-trip airfare
	� The amount of any car rentals
	� Miles driven, if a private vehicle was used. Calculate the vehicle expense as $0.27 per mile driven
	� Parking fees (The company allows up to $6 per day. Anything in excess of this must be paid by the employee.)
	� Taxi fees, if a taxi was used anytime during the trip (The company allows up to $10 per day, for each day a taxi was used.
	Anything in excess of this must be paid by the employee.)
	� Conference or seminar registration fees
	� Hotel expenses (The company allows up to $90 per night for lodging. Anything in excess of this must be paid by the employee.)
	� The amount of each meal eaten. On the first day of the trip, breakfast is allowed as an expense if the time of departure is
	before 7 a.m. Lunch is allowed if the time of departure is before 12 noon. Dinner is allowed on the first day
	if the time of departure is before 6 p.m.
	On the last day of the trip, breakfast is allowed if the time of arrival is after 8 a.m. 
	Lunch is allowed if the time of arrival is after 1 p.m. Dinner is allowed on the last day if the time of arrival
	is after 7 p.m. The program should only ask for the amounts of allowable meals.

	(The company allows up to $9 for breakfast, $12 for lunch, and $16 for dinner. Anything in excess of this must be paid by the employee.)
	The program should calculate and display the total expenses incurred by the businessperson, the total allowable expenses
	for the trip, the excess that must be reimbursed by the businessperson, if any, and the amount saved by the businessperson if
	the expenses were under the total allowed.
	
	Input Validation: Do not accept negative numbers for any dollar amount or for miles driven in a private vehicle.
	Do not accept numbers less than 1 for the number of days.Only accept valid times for the time of departure and the time of arrival.
*/
#include <iostream>

using namespace std;

// Function Prototype
void get_days_spent(int & );
void get_time(int & , int & );
void get_airfare(double & );
void car_rentals(double & );
void mile_driven(double & );
void get_parkingfee(double & );
void get_taxirent(double & );
void get_seminarfee(double & );
void get_hotelexp(double & );
void get_mealexp(int & , int & , int & );

int main() {
    // Constant 
    const double MILE_DRIVEN = 0.27;
    const int PARKING = 6,
        TAXI = 10,
        HOTEL = 90,
        BREAKFAST = 9,
        LUNCH = 12,
        DINNER = 16;

    int total_days, departure_time, arrival_time, breakfast, lunch, dinner;
    double air_fare, car_rent, miles_driven, parking_fee, taxi_rent, seminar_fee, hotel_exp, exp_occur, exp_allowable;

    get_days_spent(total_days);
    get_time(departure_time, arrival_time);
    get_airfare(air_fare);
    car_rentals(car_rent);
    mile_driven(miles_driven);
    get_parkingfee(parking_fee);
    get_taxirent(taxi_rent);
    get_seminarfee(seminar_fee);
    get_hotelexp(hotel_exp);
    get_mealexp(breakfast, lunch, dinner);

    exp_occur = air_fare + car_rent + miles_driven * MILE_DRIVEN + parking_fee + taxi_rent + seminar_fee + hotel_exp + breakfast + lunch + dinner;

    int bf = 0, lu = 0, dn = 0;

    if (departure_time < 7) {
        bf++;
        lu++;
        dn++;
    } else if (departure_time < 12) {
        lu++;
        dn++;
    } else if ((departure_time - 12) < 6)
        dn++;

    if (arrival_time > 8 && (arrival_time - 12) < 1)
        bf++;
    else if ((arrival_time - 12) > 1 && (arrival_time - 12) < 7) {
        bf++;
        lu++;
    } else if ((arrival_time - 12) > 7) {
        bf++;
        lu++;
        dn++;
    }

    exp_allowable = air_fare + car_rent + MILE_DRIVEN * miles_driven + PARKING * total_days + TAXI * total_days + seminar_fee + HOTEL * total_days + (bf + total_days) * BREAKFAST + (lu + total_days) * LUNCH + (dn + total_days) * DINNER;

    // Cout the Report
    cout << "\n\nTotal Days Spent: " << total_days;
    cout << "\nDeparture Time: ";
    if (departure_time < 12)
        cout << departure_time << " A.M";
    else if (departure_time == 12)
        cout << departure_time << " Noon";
    else
        cout << (departure_time - 12) << " P.M";
    cout << "\nArrival Time: ";
    if (arrival_time < 12)
        cout << arrival_time << " A.M";
    else if (arrival_time == 12)
        cout << arrival_time << " Noon";
    else
        cout << (arrival_time - 12) << " P.M";

    cout << "\nAir Fare for Round Trip: $" << air_fare;
    cout << "\nCar Rentals: $" << car_rent;
    cout << "\nMiles Driven: " << miles_driven;
    cout << "\nMiles Driven Cost: $" << miles_driven * MILE_DRIVEN;
    cout << "\nParking Fee (Allowable): $" << PARKING * total_days;
    cout << "\nParking Fee (Occur): $" << parking_fee;
    cout << "\nTaxi Fee (Allowable): $" << TAXI * total_days;
    cout << "\nTaxi Fee (Occur): $" << taxi_rent;
    cout << "\nSeminar Or Conference Fee: $" << seminar_fee;
    cout << "\nHotel Expense (Allowable): $" << HOTEL * total_days;
    cout << "\nHotel Expense (Occur): $" << hotel_exp;
    cout << "\nBreakfast Expense (Allowable): $" << (bf + total_days) * BREAKFAST;
    cout << "\nBreakfast Expense (Occur): $" << breakfast;
    cout << "\nLunch Expense (Allowable): $" << (lu + total_days) * LUNCH;
    cout << "\nLunch Expense (Occur): $" << lunch;
    cout << "\nDinner Expense (Allowable): $" << (dn + total_days) * DINNER;
    cout << "\nDinner Expense (Occur): $" << dinner;

    cout << "\n\nTotal Expense Allowable: $" << exp_allowable;
    cout << "\nTotal Expense Occur: $" << exp_occur;

    if ((exp_occur - exp_allowable) > 0)
        cout << "\n\nYou have to Reimburse: $" << exp_occur - exp_allowable;
    else
        cout << "\n\nYou have saved: $" << exp_allowable - exp_occur;
    cout << "\n\n";
    return 0;
}

void get_days_spent(int & d) {
    cout << "Enter Number of Days You Spent on Trip: ";
    cin >> d;
    while (d < 1) {
        cout << "ERROR: Days cannot be less then 1. Please Enter Again: ";
        cin >> d;
    }
}

void get_time(int & dep, int & arrivl) {
    cout << "Enter Departure Time (24 Hour Format - 0 to 23): ";
    cin >> dep;
    while (dep < 0 || dep > 23) {
        cout << "ERROR: Invalid Time. Enter Again: ";
        cin >> dep;
    }

    cout << "Enter Arrival Time (24 Hour Format - 0 to 23): ";
    cin >> arrivl;
    while (arrivl < 0 || arrivl > 23) {
        cout << "ERROR: Invalid Time. Enter Again: ";
        cin >> arrivl;
    }
}

void get_airfare(double & a_fare) {
    cout << "Enter If any Air-Fair for Round trip: ";
    cin >> a_fare;
    while (a_fare < 0) {
        cout << "ERROR: Air Fair Cannot be less than 0. Enter Again: ";
        cin >> a_fare;
    }
}

void car_rentals(double & c_rent) {
    cout << "Enter Total Expense If any Car has use on Rental Basic: ";
    cin >> c_rent;
    while (c_rent < 0) {
        cout << "ERROR: Expense cannot be less than 0. Enter Again: ";
        cin >> c_rent;
    }
}

void mile_driven(double & m_drive) {
    cout << "If you use your own Car, Enter Total Miles you Drive Car: ";
    cin >> m_drive;
    while (m_drive < 0) {
        cout << "ERROR: Miles cannot be less then 0. Enter Again: ";
        cin >> m_drive;
    }
}

void get_parkingfee(double & parking) {
    cout << "Enter Total Parking Expense: ";
    cin >> parking;
    while (parking < 0) {
        cout << "ERROR: Parking expense cannot be less than 0. Enter Again: ";
        cin >> parking;
    }
}

void get_taxirent(double & taxi) {
    cout << "Enter total Taxi Rent that Occur During the Trip: ";
    cin >> taxi;
    while (taxi < 0) {
        cout << "ERROR: Taxi rent canot be less than 0. Enter Again: ";
        cin >> taxi;
    }
}

void get_seminarfee(double & seminar) {
    cout << "Enter if you paid any Seminar or Conference fee: ";
    cin >> seminar;
    while (seminar < 0) {
        cout << "ERROR: Fee cannot be less than 0. Enter Again: ";
        cin >> seminar;
    }
}

void get_hotelexp(double & hotel) {
    cout << "Enter Total Hotel Expense: ";
    cin >> hotel;
    while (hotel < 0) {
        cout << "ERROR: Hotel expense Cannot be less than 0: Enter Again: ";
        cin >> hotel;
    }
}

void get_mealexp(int & bf, int & lu, int & dn) {
    cout << "Enter Total Breakfast Expense: ";
    cin >> bf;
    while (bf < 0) {
        cout << "ERROR: Breakfast Expense cannot be less than 0. Enter Again: ";
        cin >> bf;
    }

    cout << "Enter Total Lunch Expense: ";
    cin >> lu;
    while (lu < 0) {
        cout << "ERROR: Lunch Expense cannot be less than 0. Enter Again: ";
        cin >> lu;
    }

    cout << "Enter Total Dinner Expense: ";
    cin >> dn;
    while (dn < 0) {
        cout << "ERROR: Dinner Expense cannot be less than 0. Enter Again: ";
        cin >> dn;
    }
}

