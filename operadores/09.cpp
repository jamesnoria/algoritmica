//Un docente desea saber el porcentaje de varones y mujeres
//que hay en un salón de clases; realice el algoritmo respectivo.

#include "iostream"
#include "math.h"
using namespace std;

int main()
{
    float porcentaje_varones, porcentaje_mujeres;
    int varones, mujeres, total;
    cout << "¿Cuantos varones hay en el salon?: ";
    cin >> varones;
    cout << "¿Cuantas mujeres hay en el salon?: ";
    cin >> mujeres;
    total = varones + mujeres;
    porcentaje_varones = (100*varones)/total;
    porcentaje_mujeres = (100*mujeres)/total;
    // redondeamos con trunc
    cout << "Varones: " << trunc(porcentaje_varones) << "%\n";
    cout << "Mujeres: " << trunc(porcentaje_mujeres) << "%\n";

    return 0;
}