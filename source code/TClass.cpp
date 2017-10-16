#include "Person.h"
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

/*
   To compile this example:
   g++ TClass.cpp Person.cpp
   ./a.out

   To run precompiled example:
   ./TClass.out
*/

int main()
{
   Person people[2]; //create person array
   Person* personPointer = people; //assign pointer to person array

   personPointer -> setName("Austin"); //use mutator from pointer
   personPointer -> setAge(21);
   cout << "personPointer -> print():" << endl;
   personPointer -> print();
   cout << "people[0].print():" << endl;
   people[0].print();

   people[1].setName("Pao");
   people[1].setAge(22);
   cout << "people[1].print();" << endl;
   people[1].print();
   personPointer++;
   cout << "personPointer -> print():" << endl;
   personPointer -> print();
}
