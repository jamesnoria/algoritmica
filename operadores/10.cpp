// Un alumno desea saber el promedio de sus calificaciones teniendo en cuenta que:
// El promedio de sus 4 tareas académicas es el 60% del promedio final
// El examen de medio curso es el 15% del promedio final
// El examen final es el 25% del promedio final

#include "iostream"
using namespace std;

int main()
{
    float ta1, ta2, ta3, ta4, emc, efc;
    float t_promedio, promedio;
    cout << "TA-01: ";
    cin >> ta1;
    cout << "TA-02: ";
    cin >> ta2;
    cout << "TA-03: ";
    cin >> ta3;
    cout << "TA-04: ";
    cin >> ta4;
    cout << "EMC: ";
    cin >> emc;
    cout << "EFC: ";
    cin >> efc;
    t_promedio = (ta1 + ta2 + ta3 + ta4)/4;
    promedio = (t_promedio*0.6)+(emc*0.15)+(efc*0.25);
    cout << "El promedio general es: " << promedio;

    return 0;
}