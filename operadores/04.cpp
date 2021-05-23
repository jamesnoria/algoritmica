//Algoritmo que convierta horas en minutos y en segundos

#include "iostream"
using namespace std;

int main()
{
    int hr, min, seg;
    cout << "Inserte la hora a convertir ";
    cin >> hr;
    min = hr * 60;
    seg = hr * 3600;
    cout << hr << " -> MIN: " << min << " -> SEG: " << seg;

    return 0;
}