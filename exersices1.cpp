#include<iostream>
using namespace std;
/*
swe110,exersices1.cpp
this file for some exersices
shehab aboshady 2021/06754
version 1.0 , 2/8/2022 */
int main(){
    /*
 cout<<"the natural 10 number is :\n";
    for(int i=1;i<=10;i++)
    {
        cout<< i <<" ";            //a program to find the first 10 natural numbers           
    }
 return 0; 
 int i, sum=0;
 for( i=1;i<=10;i++)
 {
sum+=i;
 }
cout<<"the sum of 10 natural numbers is:"<<sum<<"\n";          //a program to find the sum of first 10 natural numbers
return 0;       
int i,num, sum=0;
cout<<"enter a number\n";
cin>>num;
cout<< "The natural numbers up to " << num << "th terms are:\n";
 for( i=1;i<=num;i++)
 {
    cout<< i<<" ";
sum+=i;                                                       //a program to display n terms of natural number and their sum

 }
cout<<"\n";
cout<<"the sum of the  numbers to "<< num <<  " is:" <<sum<<"\n";       
return 0; 

int num,x=0;
cout<<"enter a number to check if its prime or not\n";
cin>>num;
for(int i=1;i<=num;i++)
{
	if(num % i ==0)
	{
		x++;                                            //a program to check whether a number is prime or not
	}
}
if(x==2)
{
cout<<"the number is prime\n";
}
else
cout<<"the number is not prime\n";
return 0;
*/
int num,fac=1;
cout<<"enter a number\n";
cin>>num;
for(int i=num;i>=1;i--)                            // a program to find the factorial of a number
{
    fac*=i;
}
cout<<"the factorial is:"<<fac<<"\n";
}