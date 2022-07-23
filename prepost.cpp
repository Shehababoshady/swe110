#include<iostream>
using namespace std;
/* swe110,prepost.cpp
this file is to display the operation of pre and post increment and decrement
shehab aboshady 2021/06754
version 1.0, 23/7/2022 */
int main() {
int num=57;
cout<<"the number is  "<< num<<"\n";
num++;
cout<<"after the post increment by 1 the number is="<< num<<"\n";
++num;
cout<<"after the pre increment by 1 the number is="<< num<<"\n";
num=num+1;
cout<<"after increasing  by 1 the number is="<< num<<"\n";
num--;
cout<<"after the post decrement by 1 the number is="<< num<<"\n";
--num;
cout<<"after the pre decrement by 1 the number is="<< num<<"\n";
num=num-1;
cout<<"after decreasing by 1 the number is="<< num<<"\n";
return 0;
}