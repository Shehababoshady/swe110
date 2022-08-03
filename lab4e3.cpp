#include <iostream>
using namespace std;
/*
swe110,lab4e3.cpp
this file for lab 4 exersice 3
shehab aboshady 2021/06754
version 1.0 , 3/8/2022 */
int main()
{

    int num;
    cout << "please enter a number\n";
    cin >> num;
    if (num > 0)
    {
        cout << "|" << num << "| = " << num;
    }
    else if (num < 0)
    {
        cout << "|" << num << "| = ";
        cout << num * -1 << "\n";
    }
}