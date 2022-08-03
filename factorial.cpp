#include <iostream>
using namespace std;
/*
swe110,factorial.cpp
a program to find the factorial of a number
shehab aboshady 2021/06754
version 1.0 , 3/8/2022 */
int main()
{
    int num, fac = 1;
    cout << "enter a number\n";
    cin >> num;
    for (int i = num; i >= 1; i--)
    {
        fac *= i;
    }
    cout << "the factorial is:" << fac << "\n";
}