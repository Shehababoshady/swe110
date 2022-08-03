#include <iostream>
using namespace std;
/*
swe110,lab3e4.cpp
this file for lab 3 exersice 4
shehab aboshady 2021/06754
version 1.1 , 3/8/2022 */
int main()
{
 char x;
	cout << "enter a letter\n";
	cin >> x;
	if (x == 'a' || x=='e' || x == 'i' || x == 'o' || x == 'u')
	{
		cout << "the letter is vowel\n";                          
	}
	else
	{
		cout << "the number is not vowel\n";
	}
	}