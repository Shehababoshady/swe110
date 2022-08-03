#include <iostream>
using namespace std;
/*
swe110,lab3e2.cpp
this file for lab 3 exersice 2
shehab aboshady 2021/06754
version 1.1 , 3/8/2022 */
int main()
{
    int num1, num2, num3;
    cout << "enter 3 numbers\n";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << "the biggest number is:" << num1 << "\n";
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "the biggest number is:" << num2 << "\n";
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << "the biggest number is:" << num3 << "\n";
    }
}