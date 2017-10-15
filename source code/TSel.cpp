#include <iostream>
#include <string>
using namespace std;

int main()
{
   int num1 = 1, num2 = 2, num3 = 3, num4 = 1;

   //simple if
   if(num2 > num1) cout << "num2 is greater than num1" << endl;

   //if-else
   if(num1 < num3 && num1 >= num4)
      cout << "num1 < num3 && num1 >= num4" << endl;
   else
      cout << "num1 >= num3 || num1 < num4" << endl;

   //nested if else
   if(num1 != num2)
   {
      cout << "num1 != num2" << endl;
   }
   else
   {
      if(num1 == num4 || num2 == num3)
      {
         cout << "num1 == num 2 && num1 == num4 || num2 == num3" << endl;
      }
   }

   switch (num3)
   {
      case 1:
         cout << "num3 = 1" << endl;
         break;
      case 2:
         cout << "num3 = 2" << endl;
         break;
      case 3:
         cout << "num3 = 3" << endl;
   }


}
