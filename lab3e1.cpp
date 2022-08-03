#include <iostream>
using namespace std;
/*
swe110,lab3e1.cpp
this file for lab 3 exersice 1
shehab aboshady 2021/06754
version 1.1 , 3/8/2022 */
int main()
{

    int num, x;
    cout << "Input a number\n";
    cin >> num;
    for (int x = 1; x < 10; x++)
    {
        cout << num << "x" << x << "=" << num * x << "\n";
    }
}