#include <iostream>
using namespace std;
/*
swe110,lab4e1.cpp
this file for lab 4 exersice 1
shehab aboshady 2021/06754
version 1.0 , 3/8/2022 */
int main()
{

    int x, y, z, sum;
    cout << "enter the three angles of the triangle\n";
    cin >> x;
    cin >> y;
    cin >> z;
    sum = x + z + y;
    switch (sum == 180)
    {
    case true:
    {
        cout << "the triangle is valid\n";
        break;
    }
    default:
    {
        cout << "the triangle is non valid\n";
        break;
    }
    }
}