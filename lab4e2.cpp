#include <iostream>
using namespace std;
/*
swe110,lab4e2.cpp
this file for lab 4 exersice 2
shehab aboshady 2021/06754
version 1.0 , 3/8/2022 */
int main()
{

    int hour, minute;
    cout << "enter the hour and minute\n";
    cin >> hour;
    cin >> minute;
    if (hour <= 12)
    {
        cout << hour << ":" << minute << "am\n";
    }
    else if (hour > 12 && hour < 24)
    {
        cout << hour << ":" << minute << "pm\n";
    }
}