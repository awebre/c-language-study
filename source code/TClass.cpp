#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

class Car
{
   public:
      int numberOfWheels;
      int horsePowers;
      int cylinders;
};

int main()
{
   Car cars[2];
   cars[0].numberOfWheels = 4;
   cars[0].horsePowers = 100;
   cars[0].cylinders = 2;

   cars[1].numberOfWheels = 3;
   cars[1].horsePowers = 10;
   cars[1].cylinders = 1;

   Car* carPointer = cars;
   cout << "Test class and pointers" << endl;
   cout << "cars[0].cylinders = " << cars[0].cylinders << endl;
   cout << "(*carPointer).cylinders = " << (*carPointer).cylinders << endl;
}
