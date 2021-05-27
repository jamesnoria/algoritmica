// Leer la edad de una persona y escriba el mensaje respectivo si es mayor o menor de edad.

#include "iostream"
using namespace std;

int main()
{
    int edad1, edad2, edad3;
    int menor, inter, mayor;
    cout << "Inserte la primera edad: ";
    cin >> edad1;
    cout << "Inserte la segunda edad: ";
    cin >> edad2;
    cout << "Inserte la tercera edad: ";
    cin >> edad3;
    if (edad1 > edad2)
    {
        if (edad1 > edad3)
        {
            mayor = edad1;
        }
        else
        {
            mayor = edad3;
        }
    }
    else if (edad2>edad3)
    {
        mayor = edad2;
    }
    else
    {
        mayor = edad3;
    }
}