// Dado un número natural, determinar si es cero, par o impar

#include "iostream"
using namespace std;

int main()
{
    int num;
    cout << "Inserte un numero: ";
    cin >> num;
    if (num == 0)
    {
        cout << "El numero " << num << " es CERO";
    }
    else if (num % 2 == 0)
    {
        cout << "El numero " << num << " es PAR";
    }
    else
    {
        cout << "El numero " << num << " es IMPAR";
    }
    return 0;
}