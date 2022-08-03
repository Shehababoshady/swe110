#include <iostream>
#include <cmath>
/*swe110,lab1e3.cpp
lab 1 exercise 3
shehab aboshady 2021/06754
version 1.1, 3/8/2022*/
using namespace std;
int main()
{
    double BMI;
    double weight;
    double height;
    cout << "enter weight\n";
    cin >> weight;
    cout << "enter height\n";
    cin >> height;
    BMI = weight / pow(height, 2);
    cout << "BMI=weight / (height)2 =" << BMI << "\n";
} 