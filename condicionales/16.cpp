// positivo y negativo

#include "iostream"
using namespace std;

int main()
{
    float a;
    cout << "Inserte un numero: ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << a << " es PAR";
    }
    elseif (a == 0)
    {
        cout << a << " es CERO";
    }
    else
    {
        cout << a << " es IMPAR";
    }
    return 0;
}
