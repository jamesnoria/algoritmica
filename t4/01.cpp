#include <iostream>
using namespace std;

int main()
{
    int num, sum_impar, cont_impar;
    int cont_rango, sum_rango, band;
    cont_impar = 0;
    sum_impar = 0;
    cont_rango = 0;
    sum_rango = 0;
    band = 1;
    while (band != 0)
    {
        cout << "Ingrese un número: ";
        cin >> num;
        if (num % 2 != 0)
        {
            cont_impar++;
            sum_impar += num;
        }
        if (num <= 31 and num >= 7)
        {
            cont_rango++;
            sum_rango += num;
        }
        else if (num == 0)
        {
            band = 0;
        }
    }

    cout << "El promedio de los impares ingresados es: " << float(sum_impar) / float(cont_impar) << endl;
    cout << "El promedio de los numero entre 7 y 31 ingresados es: " << float(sum_rango) / float(cont_rango) << endl;

    return 0;
}