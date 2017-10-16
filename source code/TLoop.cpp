#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct vectorPrint
{
   void operator()(int value){cout << "vector contains " << value << endl;}
};

int main()
{
   int count;
   int aArray[3] = {1, 2, 3};
   int bArray[3][3] = {{10, 20, 30},
                       {11, 21, 31},
                       {12, 22, 32}};
   vector<int> myVec = vector<int>();
   myVec.push_back(4);
   myVec.push_back(5);
   myVec.push_back(6);
   int* pointer;

   count = 0;
   cout << "While loop (1D Array):" << endl;
   pointer = &aArray[0];
   while (count != 3)
   {//basic while loop
      cout << "aArray[" << count << "] = " << aArray[count] << ", *pointer = " << *pointer << endl;
      count++;
      pointer++;
   }

   cout << "For loop (2D array):" << endl;
   pointer = &bArray[1][0];
   for(int i = 0; i < 3; i++)
   {//basic for loop
      cout << "bArray[1][i] = " << bArray[1][i] << ", *pointer = " << *pointer << endl;
      pointer++;
   }

   /*
      range based for loops iterate based on the length of a collection
   */
   cout << "Range based for loop (1D array):" << endl;
   for (int i : aArray) cout << "aArray contains " << i << endl;

   cout << "Nested range based for loop (2D array):" << endl;
   for (auto &a : bArray)
   {//nested range based for loops
      for(int &i : a) cout << "bArray contains " << i << endl;
   }

   cout << "Nested for loop (2D array):" << endl;
   pointer = &bArray[0][0];
   for(int i = 0; i < 3; i++)
   {//nested for loops
      for(int j = 0; j < 3; j++)
      {
         cout << "bArray[" << i << "][" << j << "] = " << bArray[i][j] << ", *pointer = " << *pointer << endl;
         pointer++;
      }
   }

   /*
      for_each is part of the std library and is used to
      iterate over collections without knowing the particulars of the
      collection type.
   */

   cout << "for_each in myVec: " << endl;
   for_each(myVec.begin(), myVec.end(), vectorPrint());
}
