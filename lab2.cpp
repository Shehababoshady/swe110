#include <iostream>
/*
swe110,lab2.cpp
this file for lab 2 exersices
shehab aboshady 2021/06754
version 1.0 , 25/7/2022 */
using namespace std;
int main()
{
	/*

		double num1, num2;
		cout << "enter two decimal numbers\n";
		cin >> num1;
		cin >> num2;
		if (num1 > num2)
		{
			cout << "the biggest number is" << num1 << "\n";                        //exercise 1
		}
		else {
			cout << "the biggest number is" << num2 << "\n";


		int num;
		cout << "enter an enteger\n";
		cin >> num;
		if(num%2==0){                                                             //exersice 2
			cout << "the number is even\n";

		}
		else {
			cout << "the number is odd\n";
		}


		int num;
		cout << "enter an enteger\n";
		cin >> num;
		if (num % 5 == 0) {                                                         //exercise 3
			cout << " this number is a multiple of 5\n";

		}
		else {
			cout << " this number is not a multiple of 5\n";
		}


		int num;
		cout << "enter an enteger\n";
		cin >> num;
		if (num <= 5 || num > 15) {                                             //exercise 4
			cout << " Accepted number\n";

		}
		else {
			cout << " Invalid number\n";
		}


		char cha;
		cout << "enter an character\n";
		cin >> cha;
		if (cha == 'b' || cha == 'B') {
			cout << " this character is b\n";                               //   exersice 5

		}
		else {
			cout << " this character is not b\n";
		}



		int grade;
		cout << "enter an enteger\n";
		cin >> grade;
		if (grade >= 90 && grade< 100 ) {
			cout << " your grade is A\n";

		}
		else if(grade >= 80 && grade <= 89 ){
			cout << " your grade is B\n";
		}
		else if (grade >= 70 && grade <= 79) {
			cout << " your grade is C\n";                                  //   exersice 6
		}
		else if (grade >= 60 && grade <= 69) {
			cout << " your grade is D\n";
		}
		else
		{
			cout << " your grade is F\n";
		}



	double grade1, grade2, grade3, grade4, grade5, sum, percent;
	cout << "enter your five subjects grades\n";
	cin >> grade1;
	cin >> grade2;
	cin >> grade3;
	cin >> grade4;
	cin >> grade5;
	sum = grade1 + grade2 + grade3 + grade4 + grade5;
	percent = (sum / 500) * 100;
	if (percent >= 90 && percent < 100)
	{
		cout << " grade A\n";

	}
	else if (percent >= 80 && percent <= 89)
	{
		cout << " grade B\n";                                    //exersice 7
	}
	else if (percent >= 70 && percent <= 79)
	{
		cout << " grade C\n";
	}
	else if (percent >= 60 && percent <= 69)
	{
		cout << " grade D\n";
	}
	else if (percent >= 40 && percent <= 59)
	{
		cout << " grade E\n";
	}
	else
	{
		cout << " grade F\n";
	} 
	*/


int num;
cout << "enter an integer between 0 and 3\n";
cin >> num;
switch (num)
{
case 0:
	cout << "zero\n";
	break;
case 1:
	cout << "one\n";
	break;
case 2:
	cout << "two\n";                                  //exercise 8
	break;
case 3:
	cout << "three\n";
	break;
default:
	cout << "it isnt between 0 and 3\n";
	break;
}
}
