// Dado las 4 notas de tareas académicas, el emc y el de fin de curso,
// calcule su promedio e imprima el mensaje respectivo o si ingresa al sustitutorio.
// En caso afirmativo, reemplazar la menor nota (emc o efc) con el sustitutorio y hallar
// el nuevo promedio final.

#include "iostream"
using namespace std;

int main()
{
    float t1,t2,t3,t4,emc,efc,susti,promedio;
    int rpta;
    cout << "¿Cual fue su nota en la PRACTICA 01?: ";
    cin >> t1;
    cout << "¿Cual fue su nota en la PRACTICA 02?: ";
    cin >> t2;
    cout << "¿Cual fue su nota en la PRACTICA 03?: ";
    cin >> t3;
    cout << "¿Cual fue su nota en la PRACTICA 04?: ";
    cin >> t4;
    cout << "¿Cual fue su nota en el medio curso?: ";
    cin >> emc;
    cout << "¿Cual fue su nota en el fin curso?: ";
    cin >> efc;
    promedio = (((t1+t2+t3+t4)/4)+emc+efc)/3;
    if (promedio >= 10.5)
    {
        cout << "Usted esta aprobado con " << promedio;
    }
    else if (promedio < 10.5)
    {
        cout << "Su promedio es: " << promedio;
        cout << "¿Desea ir al sustitorio?\n[1]SI\n[2]NO\n";
        cin >> rpta;
        if (rpta==1)
        {
            cout << "¿Cual fue su nota?: ";
            cin >> susti;
            if (emc < efc and susti > emc)
            {
                promedio = (((t1+t2+t3+t4)/4)+susti+efc)/3;
                cout << "Su nuevo promedio es: " << promedio;
            }
            else if (emc > efc and susti < emc)
            {
                promedio = (((t1+t2+t3+t4)/4)+emc+susti)/3;
                cout << "Su nuevo promedio es: " << promedio;
            }
            else
            {
                cout << "Su promedio se mantiene porque es menor a las obtenidas";
            }
        }
        else
        {
            cout << "Tendra que llevar el curso nuevamente";
        }
    }
    return 0;
}