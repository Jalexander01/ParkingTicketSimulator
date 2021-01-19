// ParkingTicketSimulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"

using namespace std;

int main()
{
    string make = "";
    string model = "";
    string color = "";
    string licenseNumber = "";
    int minutesParked = 0;

    cout << "Enter car make: ";
    cin >> make;
    cout << "Enter car model: ";
    cin >> model;
    cout << "Enter car color: ";
    cin >> color;
    cout << "Enter car license: ";
    cin >> licenseNumber;
    cout << "Enter minutes parked: ";
    cin >> minutesParked;

    ParkedCar car(make, model, color, licenseNumber, minutesParked);

    int meter;
    cout << "Enter the parking meter minutes: ";
    cin >> meter;
    ParkingMeter parkmeter(meter);

    

    //ParkingTicket ticket(car, minutesParked);

    PoliceOfficer police;
    string name;
    cout << "Enter police officer name: ";
    cin >> name;
    police.setName(name);

    string badge;
    cout << "Enter badge number: ";
    cin >> badge;
    police.setBadgeNumber(badge);

    ParkingTicket *ticket;
     ticket = police.patrol(car, parkmeter);
     cout << "\n-----------------------------------------------\n";
    //car.print();
    parkmeter.print();
    cout << "\n-----------------------------------------------\n";
    ticket->print();
    cout << "\n-----------------------------------------------\n";
    police.print();
    //ticket.print();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
