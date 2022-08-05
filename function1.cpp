#include <iostream>
/*swe110,function1.cpp
a program that ask the user to input 3 number and print their sum and average
shehab aboshady 2021/06754
version 1.0, 5/8/2022*/
using namespace std;
int sum(int num1, int num2, int num3);
double average(float num1, float num2, float num3);
int main()
{
    int num1, num2, num3;
    cout << "enter 3 numbers\n";
    cin >> num1 >> num2 >> num3;
    cout << "the sum is  " << sum(num1, num2, num3) << "\n";
    cout << "the average is  " << average(num1, num2, num3) << "\n";
}
int sum(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}
double average(float num1, float num2, float num3)
{
    return (num1 + num2 + num3) / 3;
}
