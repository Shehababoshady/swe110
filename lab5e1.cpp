#include <iostream>
using namespace std;
/*
swe110,lab5e1.cpp
this file for lab 5 exersice 1
shehab aboshady 2021/06754
version 1.0 , 5/8/2022 */
int main()
{
   int num, sum = 0, nterms;

   cout << "enter the number of terms  you want to sum\n";
   cin >> nterms;
   cout << "enter the integers you want to sum\n";
   for (int x = 1; x <= nterms; x++)
   {

      cin >> num;
      sum += num;
   }
   cout << "the sum is: " << sum << "\n";
   return 0;
}