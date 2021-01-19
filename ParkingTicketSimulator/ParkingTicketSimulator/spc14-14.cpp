// Chapter 14, Programming Challenge 14: Parking Ticket Simulator
#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
using namespace std;

int main()
{
   // Create a ParkingTicket pointer. If a parking ticket
   // is issued, this will point to it.
   ParkingTicket *ticket = nullptr;

   // Create a ParkedCar object.
   // The car was parked for 125 minutes.
   ParkedCar car("Volkswagen", "1972", "Red", "147RHZM", 125);
      
   // Create a ParkingMeter object. 
   // 60 minutes were purchased.
   ParkingMeter meter(60);
    
   // Create a PoliceOfficer object.
   PoliceOfficer officer("Joe Friday", "4788");

   // Let the officer patrol.
   ticket = officer.patrol(car, meter);
   if (ticket != nullptr)
   {
       // Display the officer information.
      officer.print();

      // Display the ticket information.
      ticket->print();

      // We're done with the ticket, so delete it.
      delete ticket;
      ticket = nullptr;
   }
   else
      cout << "No crimes were committed.\n";

   return 0;
}