// Determinar si un número entero es divisible entre otro

#include "iostream"
using namespace std;

int main()
{
    int num1, num2;
    cout << "Inserte un numero: ";
    cin >> num1;
    cout << "Inserte un numero: ";
    cin >> num2;
    if (num1 % num2 == 0)
    {
        cout << num1 << " SI es divisible por " << num2;
    }
    else
    {
        cout << num1 << " No es divisible por " << num2;
    }

    return 0;
}