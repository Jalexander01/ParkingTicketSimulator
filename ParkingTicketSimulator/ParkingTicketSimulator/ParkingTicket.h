// Specification file for the ParkingTicket class
#ifndef PARKING_TICKET_H
#define PARKING_TICKET_H
#include "ParkedCar.h"

// Constant for the base fine.
const double BASE_FINE = 25.0;
   
// Constant for the additional hourly fine.
const double HOURLY_FINE = 10.0;

// ParkingTicket class
class ParkingTicket
{
private:
   ParkedCar car;           // The parked car
   double fine;             // The parking fine
   int minutes;             // Minutes illegally parked

   //   calculateFine method
   //   This method calculates the amount of the parking fine.
   void calculateFine();

public:
   // Default Constructor
   ParkingTicket();

   // Constructor
   ParkingTicket(ParkedCar, int);

   // Copy constructor
   ParkingTicket(const ParkingTicket &);

   // Mutators
   void setCar(ParkedCar c)
   {
      car = c;
   }

   void setMinutes(int m)
   {
      minutes = m;
   }

   // Accessors
   ParkedCar getCar() const
   {
      return car;
   }

   double getFine() const
   {
      return fine;
   }

   // print function
   void print();
};

#endif