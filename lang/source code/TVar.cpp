#include <iostream>
#include <string>
using namespace std; //using std allows us to automatically declare using std scope

int main()
{
   int num1 = 10, num2 = 20, num3 = 30;
   double double1 = 11.111, double2 = 22.222;
   float floatingAlong = 2.2345432;
   char character = 'c';
   char myString1[] = "c++";
   string myString2 = "C Plus Plus"; //the string class from std library is essential a character array
   string* myStringPointer = &myString2; //this is a pointer to myString2 
   myString2 = myString2 + "!";

   num2 = floatingAlong; //as in C there is no type checking
   floatingAlong = num1; //as in C there is implicit casting

   cout << "Integers: " << endl;
   cout << "num1 = " << num1 << endl;
   cout << "num2 = " << num2 << endl;
   cout << "num3 = " << num3 << endl;

   cout << "Doubles: " << endl;
   cout << "double1 = " << double1 << endl;
   cout << "double2 = " << double2 << endl;

   cout << "Floats are a thing too!" << endl;
   cout << "floatingAlong = " << floatingAlong << endl;

   cout << "Characters and Strings: " << endl;
   cout << "character is " << character << endl;
   cout << "myString1 is " << myString1 << endl;
   cout << "myString2 is " << myString2 << endl;
   cout << "myStringPointer address is " << myStringPointer << endl;
   cout << "myStringPointer points to " << *myStringPointer << endl;
}
