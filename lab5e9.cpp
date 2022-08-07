#include <iostream>
using namespace std;
int main()
{
    int z;
    cout << "enter a number: ";
    cin >> z;
    for (int i = z; i >= 1; i--)
    {
        for (int x = 1; x <= i; x++)
        {
            cout << "*";
        }
        cout << "\n";
    }
} 
