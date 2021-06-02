//Algoritmo que calcule el nuevo salario de un obrero,
//si obtuvo un incremento del 25% sobre su salario anterior.

#include "iostream"
using namespace std;

int main()
{
    float salario_actual, salario_nuevo;
    cout << "Ingrese el salario actual del obrero: ";
    cin >> salario_actual;
    salario_nuevo = salario_actual + (salario_actual*0.25);
    cout << "El nuevo salario del obrero con el 25% incluido es: " << salario_nuevo;

    return 0;
}