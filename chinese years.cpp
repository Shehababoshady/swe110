#include<iostream>
using namespace std;
int main(){
int birth,chyear; //chyear=chinese year
cout << "enter your birth year\n";
cin >> birth;
chyear=birth % 12;
switch (chyear)
{
case 0:
	cout << "monkey\n";
	break;
case 1:
	cout << "rooster\n";
	break;
case 2:
	cout << "dog\n";                         
	break;
case 3:
	cout << "pig\n";
	break;
case 4:
cout<<"rat\n";
break;
case 5:
cout<<"ox\n";
break;
case 6:
cout<<"tigger\n";
break;
case 7:
cout<<"rabbit\n";
break;
case 8:
cout<<"dragon\n";
break;
case 9:
cout<<"snake\n";
break;
case 10:
cout<<"horse\n";
break;
case 11:
cout<<"sheep\n";
break;
}

}