#include <iostream>
using namespace std;

int main()
{
    int num1, num2, mult, i, mcd;
    int arr1[20];
    int arr2[20];

    cout << "Averiguemos el Minimo Comun Multiplo de DOS numeros\n";
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "MULTIPLOS DE " << num1 << " = {";
    for (i = 0; i <= 15; i++)
    {
        mult = num1 * (i + 1);
        arr1[i] = mult;
        cout << " " << arr1[i];
    }
    cout << " }\nMULTIPLOS DE " << num2 << " = {";
    for (i = 0; i <= 15; i++)
    {
        mult = num2 * (i + 1);
        arr2[i] = mult;
        cout << " " << arr2[i];
    }
    mcd = 1; // minimo comun divisor
    for (i = 1; i <= 20; i++)
    {
        if ((num1 % i == 0) and (num2 % i == 0))
        {
            mcd = i;
        }
    }
    cout << " }\nEl M.C.M de " << num1 << " y " << num2 << " es: " << (num1 * num2) / mcd << endl;
    return 0;
}