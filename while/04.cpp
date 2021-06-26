// P04->Que pida un número y pregunte si desea continuar si o no; en caso afirmativo que
// continúe pidiendo números, sino que se detenga e imprima la suma de todos los números
// ingresados. Nota el ‘s’ o ‘n’ ingresados deben estar entre apostrofes.

#include <iostream>
using namespace std;

int main()
{
    int num, suma;
    char val; //op
    cout << "Ingrese un número: ";
    cin >> num;
    cout << "¿Desea continuar? [s/n]: ";
    cin >> val;
    suma = num;
    while (val == 's' or val == 'S')
    {
        cout << "Ingrese otro número: ";
        cin >> num;
        cout << "¿Desea continuar?: ";
        cin >> val;
        suma = suma + num;
    }
    cout << "La suma total es: " << suma << endl;

    return 0;
}