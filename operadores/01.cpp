// Algoritmo que permita el ingreso de dos números enteros y calcule la
// división de ambos números.

#include <iostream>
using namespace std;

int main()
{
    //float para obtener valores exactos:
    float a, b, c;

    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese un numero: ";
    cin >> b;
    c = a / b; //Realizamos la división
    cout << "La division de " << a << " / " << b << " = " << c;

    return 0;
}