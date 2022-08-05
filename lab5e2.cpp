#include <iostream>
using namespace std;
/*
swe110,lab5e2.cpp
this file for lab 5 exersice 2
shehab aboshady 2021/06754
version 1.0 , 5/8/2022 */
int main()
{
    int num1, num2, sumeven = 0;

    cout << "enter the smallest number\n";
    cin >> num1;
    cout << "enter the bigger number\n";
    cin >> num2;
    for (int x = num1; x <= num2; x++)
    {
        if (x % 2 == 0)
        {
            sumeven += x;
        }
    }
    cout << "the sum of the even numbers is: " << sumeven << "\n";
    return 0;
}