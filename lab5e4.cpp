#include <iostream>
using namespace std;
/*
swe110,lab5e4.cpp
this file for lab 5 exersice 4
shehab aboshady 2021/06754
version 1.0 , 5/8/2022 */
int main()
{
    int num, sum = 0, result = 0;
    cout << "enter a number\n";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cout << "(" << i << "x" << i << ")";

        sum = i * i;
        result += sum;
        cout << ((i < num) ? "+" : "");
    }
    cout << "= " << result << "\n";
}