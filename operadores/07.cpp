//Algoritmo que calcule la distancia (MRU)
//sabiendo la velocidad y el tiempo recorrido por un móvil.

#include "iostream"
using namespace std;

int main()
{
    float dist, vel, tie;
    cout << "Inserte la velocidad del movil: ";
    cin >> dist;
    cout << "Inserte el tiempo del movil: ";
    cin >> tie;
    dist = vel * (tie/60);
    cout << "MRU: " << dist << "km.";

    return 0;
}