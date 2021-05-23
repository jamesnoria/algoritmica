//Un docente desea saber el porcentaje de varones y mujeres
//que hay en un salón de clases; realice el algoritmo respectivo.

#include "iostream"
#include "math.h"
using namespace std;

int main()
{
    float por_varones, por_mujeres;
    int varones, mujeres, total;
    cout << "¿Cuantos varones hay en el salon?: ";
    cin >> varones;
    cout << "¿Cuantas mujeres hay en el salon?: ";
    cin >> mujeres;
    total = varones + mujeres;
    por_varones = (100*varones)/total;
    por_mujeres = (100*mujeres)/total;
    // redondeamos con trunc
    cout << "Varones: " << trunc(por_varones) << "%\n";
    cout << "Mujeres: " << trunc(por_mujeres) << "%\n";

    return 0;
}