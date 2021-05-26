// Escribir un programa que pida al usuario su peso (en kg)
// y estatura (en metros), calcule el índice de masa corporal

#include "iostream"
#include "math.h"
using namespace std;

int main()
{
    float peso, estatura, imc;
    cout << "Inserte su peso (kgs): ";
    cin >> peso;
    cout << "Inserte su estatura (mts): ";
    cin >> estatura;
    imc = peso / pow(estatura,2);
    // Redondeamos el valor del imc final:
    cout << "IMC: " << trunc(imc);

    return 0;
}