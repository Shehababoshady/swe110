#include <iostream>
/*
swe110,lab2e3.cpp
this file for lab 2 exersice 3
shehab aboshady 2021/06754
version 1.1 , 3/8/2022 */
using namespace std;
int main()
{

    int num;
    cout << "enter an enteger\n";
    cin >> num;
    if (num % 5 == 0)
    {
        cout << " this number is a multiple of 5\n";
    }
    else
    {
        cout << " this number is not a multiple of 5\n";
    }
}