// Implementation file for the ParkedCar class
#include <iostream>
#include "ParkedCar.h"
using namespace std;

// Default Constructor
ParkedCar::ParkedCar()
{
   make = "";
   model = "";
   color = "";
   licenseNumber = "";
   minutesParked = 0;
}

// Constructor
// Parameters:
//    mk The car's make.
//    mod The car's model.
//    col The car's color.
//    lic The car's license number.
//    min The number of minutes parked.
ParkedCar::ParkedCar(string mk, string mod, string col,
                     string lic, int min)
{
   make = mk;
   model = mod;
   color = col;
   licenseNumber = lic;
   minutesParked = min;
}

// Copy constructor
ParkedCar::ParkedCar(const ParkedCar &car2)
{
   make = car2.make;
   model = car2.model;
   color = car2.color;
   licenseNumber = car2.licenseNumber;
   minutesParked = car2.minutesParked;
}

// print function
void ParkedCar::print()
{
   cout << "\nCar Information:\n";
   cout << "\tMake: " << make << endl;
   cout << "\tmodel: " << model << endl;
   cout << "\tColor: " << color << endl;
   cout << "\tLicense Number: " << licenseNumber << endl;
   cout << "\tMinutes Parked: " << minutesParked << endl;
}