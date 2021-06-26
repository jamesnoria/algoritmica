#include "iostream"
using namespace std;

int main()
{
    int ri, rf;
    cout << "Ingrese rango inicial: ";
    cin >> ri;
    cout << "Ingrese rango final: ";
    cin >> rf;
    while(ri > rf or ri < 0 or rf < 0)
    {
        cout << "EL RANGO INICIAL DEBE SER MENOR QUE EL FINAL";
        cout << "\nIngrese rango inicial: ";
        cin >> ri;
        cout << "Ingrese rango final: ";
        cin >> rf;
    }
    while(ri <= rf)
    {
        cout << ri  << endl;
        ri++;
    }
    return 0;
}