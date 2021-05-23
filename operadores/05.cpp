// Algoritmo que convierta grados Celsius a grados Fahrenheit

#include "iostream"
using namespace std;

int main()
{
    float cen, fah;
    cout << "Introduzca el valor en grado centigrados: ";
    cin >> cen;
    fah = (cen*9/5)+32; //formula de conversion a fahrenheit
    cout << cen << "º CELSIUS = " << fah << "º FAHRENHEIT";

    return 0;
}