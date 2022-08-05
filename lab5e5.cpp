#include <iostream>
using namespace std;
/*
swe110,lab5e5.cpp
this file for lab 5 exersice 5
shehab aboshady 2021/06754
version 1.0 , 5/8/2022 */
int main()
{
    int num, sum = 0;
    do
    {
        cout << "enter a number\n";
        cin >> num;

        if (num <= 15)
        {
            sum += num;
        }
    } while (num <= 15);
    cout << "the sum of the numbers is: " << sum << "\n";
}