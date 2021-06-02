// Algoritmo que convierta grados Celsius a grados Fahrenheit

#include "iostream"
using namespace std;

int main()
{
    float c, f;
    cout << "Introduzca el valor en grados celsius a convertir: ";
    cin >> c;
    f = (c*9/5)+32; //formula de conversion a fahrenheit
    cout << c << "º CELSIUS = " << f << "º FAHRENHEIT";

    return 0;
}