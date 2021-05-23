//Algoritmo que eleve al cubo un número entero.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, cubo;
    cout << "Inserte un numero: ";
    cin >> num;
    cubo = pow(num,3);
    cout << num << " elevado al cubo es: " << cubo;

    return 0;
}