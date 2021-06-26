// Modifique el algoritmo anterior para que al final también imprima
// la cantidad de datos ingresados y el promedio de los datos.

#include "iostream"
using namespace std;

int main()
{
    int num, suma, cont;
    char val;
    cout << "Ingrese un número: ";
    cin >> num;
    cout << "¿Desea continuar? [s/n]: ";
    cin >> val;
    suma = num;
    cont = 1;
    while (val == 's' or val == 'S')
    {
        cout << "Ingrese otro número: ";
        cin >> num;
        cout << "¿Desea continuar?: ";
        cin >> val;
        suma = suma + num;
        cont++;
    }
    cout << "La suma total es: " << suma << endl;
    cout << "La cantidad de datos es: " << cont << endl;
    cout << "El promedio es: " << float(suma) / float(cont) << endl;

    return 0;
}