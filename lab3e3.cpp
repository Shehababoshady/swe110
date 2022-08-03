#include <iostream>
using namespace std;
/*
swe110,lab3e3.cpp
this file for lab 3 exersice 3
shehab aboshady 2021/06754
version 1.1 , 3/8/2022 */
int main()
{
    int num;
    cout << "enter a number\n";
    cin >> num;
    if (num > 0)
    {
        cout << "the number is positive\n";
    }
    else if (num < 0)
    {
        cout << "the number is negative\n";
    }
    else
    {
        cout << "the number is zero\n";
    }
}