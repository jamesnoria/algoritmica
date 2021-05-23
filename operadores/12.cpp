// Escribir un programa que lea un entero positivo, n introducido por el usuario
// y después muestre en pantalla la suma de todos los enteros desde 1 hasta n

#include "iostream"
using namespace std;

int main()
{
    int n, suma;
    cout << "Introduzca un numero entero: ";
    cin >> n;
    suma = n * (n+1)/2;
    cout << "La suma de los primeros numeros enteros desde 1 hasta " << n << " es: " << suma;

    return 0;
}