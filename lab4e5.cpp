#include <iostream>
using namespace std;
/*
swe110,lab4e5.cpp
this file for lab 4 exersice 5
shehab aboshady 2021/06754
version 1.0 , 3/8/2022 */
int main()
{
    int num, x = 0;
    cout << "enter a number to check if its prime or not\n";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            x++;
        }
    }
    if (x == 2)
    {
        cout << "the number is prime\n";
    }
    else
        cout << "the number is not prime\n";
    return 0;
}
