#include<iostream>
#include<cmath>
/*swe110,lab1.cpp
this file for the lab1 exercises
shehab aboshady 2021/06754
version 1.0, 24/7/2022*/
using namespace std;
 int main() { 
    cout << " *****************************\n";
     cout << " * Programming exercise I *\n";
      cout << " * Computer programming I *\n";                 //exercise 1
       cout << " *        Author:???      *\n";
        cout << " * Date: Saturday,Oct. 24 *\n";
         cout << " *****************************\n";
         
         
          cout << "2+4-5*8+(15/5)=" << 2 + 4 - 5 * 8 + (15 / 5) << "\n";          //exersice 2


           double BMI;
            double weight;
             double height;
              cout << "enter weight\n";
               cin >> weight;
                cout << "enter height\n";                               //exercise 3
                 cin >> height;
                  BMI = weight / pow(height, 2);
                   cout << "BMI=weight / (height)2 =" << BMI << "\n";
                   
                   
                    char letter1 = 'C';
                     char letter2 = 'p';            //exercise 4
                      char letter3 = 'p';
                       cout << letter1<< letter2<<letter3<<"\n";
                       
                       
                       
                       
                       
                        double r = 5;
                         double area;
                          area = 2 * 3.14 * pow(r, 2);               //exercise 5
                           cout << "area of circle=" << area << "\n";
                           
                           
                           int x,y;
                            cout << "enter 2 integers\n";            //exersice 6
                             cin >> x;
                              cin >> y;
                               cout << "the sum of the 2 integers is :"<< x+y <<"\n";
                                return 0;
                                
                                 }
