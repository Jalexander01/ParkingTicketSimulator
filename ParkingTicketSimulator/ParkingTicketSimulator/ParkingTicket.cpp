// Implementation file for the ParkingTicket class
#include "ParkingTicket.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Default constructor
ParkingTicket::ParkingTicket()
{
   fine = 0.0;
   minutes = 0;
}

// Constructor
// Parameters:
//    aCar - A ParkedCar object.
//    min - Minutes illegally parked.
ParkingTicket::ParkingTicket(ParkedCar aCar, int min)
{
   car = aCar;
   minutes = min;
      
   // Calculate the fine.
   calculateFine();
}

// Copy constructor
ParkingTicket::ParkingTicket(const ParkingTicket &ticket2)
{
   car = ticket2.car;
   fine = ticket2.fine;
}
   
//   calculateFine method
//   This method calculates the amount of the parking fine.
void ParkingTicket::calculateFine()
{
   // Get the time parked in hours.
   double hours = minutes / 60.0;
      
   // Get the hours as an int.
   int hoursAsInt = static_cast<int>(hours);
      
   // If there was a portion of an hour, round up.
   if ((hours - hoursAsInt) > 0)
      hoursAsInt++;
      
   // Assign the base fine.
   fine = BASE_FINE;
      
   // Add the additional hourly fines.
   fine += (hoursAsInt * HOURLY_FINE);
}

// print function
void ParkingTicket::print()
{
   // Print car information.
   car.print();
   
   // Print ticket information.
   cout << "Ticket Information:\n";
   cout << "\tMinutes in violation: " << minutes << endl;
   cout << "\tFine: $ " << setprecision(2) << fixed
        << showpoint << fine << endl;
}