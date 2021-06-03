#include "iostream"
using namespace std;

int main()
{
    int person_age;
    cout << "Hola, ingrese su edad por favor\n";
    cin >> person_age;
    if (person_age >= 18)
    {
        cout << "Usted es MAYOR DE EDAD";
    }
    else
    {
        cout << "Usted es MENOR DE EDAD";
    }

    return 0;
}