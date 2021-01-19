// Implementation file for the PoliceOfficer class
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
#include <iostream>
using namespace std;

// The patrol function looks at the number of
// minutes a car has been parked and the number
// of minutes purchased. If the minutes parked is
// greater than the minutes purchased, a pointer
// to a ParkingTicket object is returned. Otherwise
// the function returns a nullptr.
ParkingTicket* PoliceOfficer::patrol(ParkedCar car, ParkingMeter meter)
{
   // Get the minutes parked over the amount purchased.
   int illegalMinutes = car.getMinutesParked() - 
                meter.getMinutesPurchased();
      
   // Determine whether the car is illegally parked.     
   if (illegalMinutes > 0)
   {
      // Yes, it is illegally parked.
      // Create a ParkingTicket object.
      ticket = new ParkingTicket(car, illegalMinutes);
   }
      
   // Return the ticket, if any.
   return ticket;
}

// print function
void PoliceOfficer::print()
{
   cout << "Police Officer Information:\n";
   cout << "\tName: " << name << endl;
   cout << "\tBadge Number: " << badgeNumber << endl;
}