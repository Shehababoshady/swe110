#include <iostream>
using namespace std;
/*
swe110,lab5e7.cpp
this file for lab 5 exersice 7
shehab aboshady 2021/06754
version 1.0 , 5/8/2022 */
int main()
{
    int z;
    cout << "enter a number: ";
    cin >> z;
    for (int i = 1; i <= z; i++)
    {
        for (int x = 1; x <= i; x++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
