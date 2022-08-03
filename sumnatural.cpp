#include <iostream>
using namespace std;
/*
swe110,sumnatural.cpp
a program to find the sum of first 10 natural numbers
shehab aboshady 2021/06754
version 1.0 , 3/8/2022 */
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    cout << "the sum of 10 natural numbers is:" << sum << "\n";
    return 0;
}