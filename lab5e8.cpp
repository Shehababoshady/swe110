#include <iostream>
using namespace std;
int main()
{
    int z;
    cout << "enter a number: ";
    cin >> z;
    for (int i = 0; i <= z; i++)
    {
        for (int x = 0; x <= i; x++)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
