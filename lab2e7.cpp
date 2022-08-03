#include <iostream>
/*
swe110,lab2e7.cpp
this file for lab 2 exersice 7
shehab aboshady 2021/06754
version 1.1 , 3/8/2022 */
using namespace std;
int main()
{
    double grade1, grade2, grade3, grade4, grade5, sum, percent;
    cout << "enter your five subjects grades\n";
    cin >> grade1;
    cin >> grade2;
    cin >> grade3;
    cin >> grade4;
    cin >> grade5;
    sum = grade1 + grade2 + grade3 + grade4 + grade5;
    percent = (sum / 500) * 100;
    if (percent >= 90 && percent < 100)
    {
        cout << " grade A\n";
    }
    else if (percent >= 80 && percent <= 89)
    {
        cout << " grade B\n"; // exersice 7
    }
    else if (percent >= 70 && percent <= 79)
    {
        cout << " grade C\n";
    }
    else if (percent >= 60 && percent <= 69)
    {
        cout << " grade D\n";
    }
    else if (percent >= 40 && percent <= 59)
    {
        cout << " grade E\n";
    }
    else
    {
        cout << " grade F\n";
    }
}