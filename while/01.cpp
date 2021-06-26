#include <iostream>
using namespace std;

int main()
{
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;
    while (edad > 100 or edad < 1)
    {
        cout << "RANGO [0-100]" << endl;
        cout << "Ingrese su edad: ";
        cin >> edad;
    }
    if (edad < 18)
        cout << "USTED ES MENOR DE EDAD";
    else
        cout << "USTED ES MAYOR DE EDAD";

    return 0;
}