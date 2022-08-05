#include <iostream>
using namespace std;
/*
swe110,lab5e3.cpp
this file for lab 5 exersice 3
shehab aboshady 2021/06754
version 1.0 , 5/8/2022 */
int main()
{
    int num, fac = 1;
    cout << "enter a number\n";
    cin >> num;
    for (int i = num; i >= 1; i--)
    {
        fac *= i;
    }
    cout << "the factorial is: " << fac << "\n";
}