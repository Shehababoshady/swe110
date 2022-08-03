#include <iostream>
/*
swe110,lab2e4.cpp
this file for lab 2 exersice 4
shehab aboshady 2021/06754
version 1.1 , 3/8/2022 */
using namespace std;
int main()
{

    int num;
    cout << "enter an enteger\n";
    cin >> num;
    if (num <= 5 || num > 15)
    {
        cout << " Accepted number\n";
    }
    else
    {
        cout << " Invalid number\n";
    }
}