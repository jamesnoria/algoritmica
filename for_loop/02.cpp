#include <iostream>
using namespace std;

int main()
{
    int i, num, x, suma, contador_pares, contador_impares, suma_par, suma_impar;
    cout << "Introduzca la secuencia: ";
    cin >> num;
    x = 3;
    contador_pares = 0;
    contador_impares = 0;
    suma_par = 0;
    suma_impar = 0;
    for (i = 1; i <= num; i++)
    {
        if (x % 2 == 0)
        {
            cout << x << " ES PAR" << endl;
            contador_pares += 1;
            suma_par += x;
        }
        else
        {
            cout << x << " ES IMPAR" << endl;
            contador_impares += 1;
            suma_impar += x;
        }
        x = x + 3;
    }

    cout << "SUMA PARES: " << suma_par << endl;
    cout << "SUMA IMPARES: " << suma_impar << endl;
    cout << "PROMEDIO PARES: " << suma_par / contador_pares << endl;
    cout << "PROMEDIO IMPARES: " << suma_impar / contador_impares << endl;

    return 0;
}