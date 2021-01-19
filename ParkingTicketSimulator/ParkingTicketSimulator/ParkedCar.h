// Specification file for the ParkedCar class
#ifndef PARKED_CAR_H
#define PARKED_CAR_H
#include<string>
using namespace std;

//   ParkedCar class
class ParkedCar
{
private:
   string make;          // The car's make
   string model;         // The car's model
   string color;         // The car's color
   string licenseNumber; // The car's license number
   int minutesParked;    // Minutes parked

public:
   // Default constructor
   ParkedCar();

   // Constructor
   ParkedCar(string, string, string, string, int);

   // Copy constructor
   ParkedCar(const ParkedCar &);
   
   // Mutators
   void setMake(string m)
      { make = m; }

   void setModel(string m)
      { model = m; }

   void setColor(string c)
      { color = c; }

   void setLicenseNumber(string lic)
      { licenseNumber = lic; }

   void setMinutesParked(int m)
      { minutesParked = m; }

   // Accessors
   string getMake() const
      { return make; }

   string getModel() const
      { return model;}

   string getColor() const
      { return color; }

   string getLicenseNumber() const
      { return licenseNumber; }

   int getMinutesParked() const
      { return minutesParked; }
   
   // print function
   void print();
};

#endif