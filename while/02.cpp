#include <iostream>
using namespace std;

int main()
{
    int ri, rf, num;

    cout << "Introduzca el rango inicial: ";
    cin >> ri;
    cout << "Introduzca el rango final: ";
    cin >> rf;
    cout << "Introduzca el número: ";
    cin >> num;
    while (num < ri or num > rf)
    {
        cout << "El numero no se encuentra en el rango\n";
        cout << "Introduzca el número nuevamente: ";
        cin >> num;
    }
    if (num >= ri or num <= rf)
    {
        cout << num << " se encuentra en el rango" << endl;
    }
}