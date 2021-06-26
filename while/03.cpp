// Que permita el ingreso del nombre de un alumno y tres notas, imprimir su promedio y si está o no aprobado.
// Tener en cuenta que las notas deben estar en el rango de 0  a 20 solamente sino debe volver a pedir.

#include <iostream>
using namespace std;

int main()
{
    int nota, n1, n2, n3;
    string alumno;

    cout<<"Introduzca su nombre: ";
    getline(cin, alumno);
    cout << "Introduzca NOTA 01: ";
    cin >> n1;
    while (n1 < 0 )
    {
        /* code */
    }
    
}