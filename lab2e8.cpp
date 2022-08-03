#include <iostream>
/*
swe110,lab2e8.cpp
this file for lab 2 exersice 8
shehab aboshady 2021/06754
version 1.1 , 3/8/2022 */
using namespace std;
int main()
{
    int num;
    cout << "enter an integer between 0 and 3\n";
    cin >> num;
    switch (num)
    {
    case 0:
        cout << "zero\n";
        break;
    case 1:
        cout << "one\n";
        break;
    case 2:
        cout << "two\n";
        break;
    case 3:
        cout << "three\n";
        break;
    default:
        cout << "it isnt between 0 and 3\n";
        break;
    }
}