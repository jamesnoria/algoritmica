//Algoritmo que calcule la distancia (MRU)
//sabiendo la velocidad y el tiempo recorrido por un móvil.

#include "iostream"
using namespace std;

int main()
{
    float distancia, velocidad, tiempo;
    cout << "Inserte la velocidad del movil: ";
    cin >> velocidad;
    cout << "Inserte el tiempo del movil: ";
    cin >> tiempo;
    distancia = velocidad * (tiempo/60);
    cout << "MRU: " << distancia << "km.";

    return 0;
}