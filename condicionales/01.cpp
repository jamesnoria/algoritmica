// Dado un número entero, determinar si es positivo, negativo o cero

#include "iostream"
using namespace std;

int main()
{
    int num;
    cout << "Inserte un numero entero: ";
    cin >> num;
    if (num < 0)
    {
        cout << "El numero " << num << " es NEGATIVO";
    }
    else if (num > 0)
    {
        cout << "El numero " << num << " es POSITIVO";
    }
    else
    {
        cout << "El numero " << num << " es CERO";
    }
    return 0;
}