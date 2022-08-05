#include <iostream>
using namespace std;
/*
swe110,lab5e6.cpp
this file for lab 5 exersice 6
shehab aboshady 2021/06754
version 1.0 , 5/8/2022 */
int main()
{
    int table;
    cout << "enter a number: ";
    cin >> table;
    for (int i = 1; i <= table; i++)
    {
        for (int x = 1; x <= table; x++)
        {
            cout << "#";
        }
        cout << "\n";
    }
}
