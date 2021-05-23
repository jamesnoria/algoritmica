// Una panadería vende barras de pan a 3.49€ cada una. El pan que no es el día tiene
// un descuento del 60%. Escribir un programa que comience leyendo el número de barras
// vendidas que no son del día. Después el programa debe mostrar el precio habitual de
// una barra de pan, el descuento que se le hace por no ser fresca y el coste final total.

#include "iostream"
using namespace std;

int main()
{
    float precio_desc, desc_total, cant_pan;
    cout << "Inserte el numero de panes: ";
    cin >> cant_pan;
    precio_desc = 3.49 - (3.49*0.6);
    desc_total = cant_pan * precio_desc;
    cout << "El precio de un pan es: $3.49\n";
    cout << "El precio cuando NO es del dia es de -60%\n";
    cout << "El descuento es: " << desc_total;

    return 0;
}