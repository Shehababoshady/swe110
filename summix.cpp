#include <iostream>
using namespace std;
/* swe110,summix.cpp
this file to sum mixed data types
shehab aboshady 2021/06754
version 1.0, 23/7/2022 */
int main(){
int num1=5;
int num2=7;
double num3=3.7;
double num4=8.0;
cout<<"5+7="<< num1+num2<<"\n";
cout<<"3.7+8.0="<< num3+num4<<"\n";
cout<<"5+8.0="<< num1+num4<<"\n";
cout<<"5-7="<< num1-num2<<"\n";
cout<<"3.7-8.0="<< num3-num4<<"\n";
cout<<"5-8.0="<< num1-num4<<"\n";
cout<<"5*7="<< num1*num2<<"\n";
cout<<"3.7*8.0="<< num3*num4<<"\n";
cout<<"5*8.0="<< num1*num4<<"\n";
cout<<"5/7="<< num1/num2<<"\n";
cout<<"3.7/8.0="<< num3/num4<<"\n";
cout<<"5/8.0="<< num1/num4<<"\n";

return 0;
}