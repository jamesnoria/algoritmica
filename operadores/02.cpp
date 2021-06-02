// Algoritmo que convierta soles a dólares.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float cambio, soles, valor;
    cout << "Inserte la cantidad a convertir: ";
    cin >> soles;
    cout << "Inserte el cambio actual: ";
    cin >> cambio;
    valor = soles / cambio;
    // Reduciendo decimales a dos:
    cout << "S/." << soles << " es igual a: " << fixed << setprecision(2) << valor << " dolares";

    return 0;
}