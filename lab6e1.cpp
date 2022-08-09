#include <iostream>
using namespace std;
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int division(int num1, int num2);
int main()
{
    int x, y, ope, exit;
    do
    {
        cout << "1.addition\n";
        cout << "2.subtraction\n";
        cout << "3.multiplication\n";
        cout << "4.division\n";
        cout << "enter the operation you want to use\n";
        cin >> ope;
        if (ope >= 1 && ope <= 4)
        {
            cout << "Enter any two Numbers: \n";
            cin >> x >> y;
        }
        switch (ope)
        {
        case 1:
            cout << "result:" << add(x, y) << "\n\n";
            break;
        case 2:
            cout << "result:" << sub(x, y) << "\n\n";
            break;
        case 3:
            cout << "result:" << mul(x, y) << "\n\n";
            break;
        case 4:
            cout << "result:" << division(x, y) << "\n\n";
            break;
        default:
            cout << "wrong choice\n";
            break;
        }
        cout << "if you want to exit enter -1\n";
        cin >> exit;
    } while (exit != -1);
    cout << "\n";
    return 0;
}
int add(int num1, int num2)
{
    return (num1 + num2);
}
int sub(int num1, int num2)
{
    return (num1 - num2);
}
int mul(int num1, int num2)
{
    return (num1 * num2);
}
int division(int num1, int num2)
{
    return (num1 / num2);
}