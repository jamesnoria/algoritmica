//Algoritmo que convierta horas en minutos y en segundos

#include "iostream"
using namespace std;

int main()
{
    int horas, minutos, segs;
    cout << "Inserte la hora a convertir ";
    cin >> horas;
    minutos = horas * 60;
    segs = horas * 3600;
    cout << horas << " -> MIN: " << minutos << " -> SEG: " << segs;

    return 0;
}