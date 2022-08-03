#include <iostream>
using namespace std;
/*
swe110,lab3e6.cpp
this file for lab 3 exersice 6
shehab aboshady 2021/06754
version 1.1 , 3/8/2022 */
int main()
{
   int num,x,sumodd=0;
cout<<"please enter a number\n";
cin>>num;
for(int x=1;x<=num;x+=2)                       
{
    sumodd+=x;
}
 cout<<"Sum of all odd number between 1 to " << num << ": "<<sumodd;
}
