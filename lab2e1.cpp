#include <iostream>
/*
swe110,lab2e1.cpp
this file for lab 2 exersice 1
shehab aboshady 2021/06754
version 1.1 , 3/8/2022 */
using namespace std;
int main()
{

    double num1, num2;
    cout << "enter two decimal numbers\n";
    cin >> num1;
    cin >> num2;
    if (num1 > num2)
    {
        cout << "the biggest number is" << num1 << "\n";
    }
    else
    {
        cout << "the biggest number is" << num2 << "\n";
    }
}