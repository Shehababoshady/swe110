#include <iostream>
using namespace std;
/*
swe110,naturalterms.cpp
a program to display n terms of natural number and their sum
shehab aboshady 2021/06754
version 1.0 , 3/8/2022 */
int main()
{
    int i, num, sum = 0;
    cout << "enter a number\n";
    cin >> num;
    cout << "The natural numbers up to " << num << "th terms are:\n";
    for (i = 1; i <= num; i++)
    {
        cout << i << " ";
        sum += i;
    }
    cout << "\n";
    cout << "the sum of the  numbers to " << num << " is:" << sum << "\n";
    return 0;
}