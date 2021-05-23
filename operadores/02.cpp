// Algoritmo que convierta soles a dólares.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float cambio, soles;
    cout << "Inserte la cantidad a convertir: ";
    cin >> soles;
    cambio = soles / 3.69;
    // Reduciendo decimales a dos:
    cout << "S/." << soles << " son: $" << setprecision(3) << cambio;

    return 0;
}