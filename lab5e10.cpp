#include <iostream>
using namespace std;
int main()
{
    int x, y, number = 1, n = 4;

    for (x = 0; x <= n; x++)
    {

        for (y = 0; y < x; y++)
        {

            cout << number << " ";

            number++;
        }

        cout << "\n";
    }
    return 0;
} 
