#include<iostream>
using namespace std;
/*
swe110,lab3.cpp
this file for lab 3 exersices
shehab aboshady 2021/06754
version 1.0 , 31/7/2022 */
int main() {
	/*
	int num,x;
	cout << "Input a number\n";
	cin >> num;
	for (int x = 0; x < 10; x++)                                         //exersice 1
	{
		cout << num << "x" << x << "=" << num * x << "\n";
	}
	
	int num1, num2, num3;
	cout << "enter 3 numbers\n";
	cin >> num1;
	cin >> num2;
	cin >> num3;
	if (num1 > num2 && num1 > num3)
	{
		cout <<"the biggest number is:"<< num1 << "\n";
	}
	else if(num2 > num1 && num2 > num3)
	{
		cout << "the biggest number is:" << num2 << "\n";              //exersice 2
	} 
	 else if(num3 > num1  && num3 > num2)
	{
		cout << "the biggest number is:" << num3 << "\n";
	}
	
	int num;
	cout << "enter a number\n";
	cin >> num;
	if(num>0)
	{
		cout << "the number is positive\n";
	}
	else if(num<0)
	{
		cout << "the number is negative\n";                            //exersice 3
	}
	else
	{
		cout << "the number is zero\n";
	}
	
	char x;
	cout << "enter a letteer\n";
	cin >> x;
	if (x == 'a' || x=='e' || x == 'i' || x == 'o' || x == 'u')
	{
		cout << "the letter is vowel\n";                                //exersice 4
	}

	else
	{
		cout << "the number is not vowel\n";
	}
	
	int x,i;
	cout << "enter an number\n";
	cin >> x;
	for (int i = x; i > 0; i--)                                        //exersice 5
	{
		cout<< i << "\n";
	}
	*/
int num,x,sumodd=0;
cout<<"please enter a number\n";
cin>>num;
for(int x=1;x<=num;x+=2)                                           //exersice 6
{
    sumodd+=x;
}
 cout<<"Sum of all odd number between 1 to " << num << ": "<<sumodd;
}