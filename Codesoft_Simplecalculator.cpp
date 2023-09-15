#include <iostream>
using namespace std;

int main()
{
    float n1, n2;
    char ao;
    cout << "Please Enter a number n1 : ";
    cin >> n1;
    cout << "Please Enter a number n2 : ";
    cin >> n2;

    cout << "Please enter a arithmetic operators(+,-,*,/) : ";
    cin >> ao;
    switch (ao)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        if (n2 == 0)
        {
            cout << "Can not divide by 0 or infinity " << endl;
        }
        else
        {
            cout << (n1 / n2);
        }
        break;
    default:
        cout << "Invalid_argument" << endl;
    }
    return 0;
}