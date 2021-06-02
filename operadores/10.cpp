// Un alumno desea saber el promedio de sus calificaciones teniendo en cuenta que:
// El promedio de sus 4 tareas académicas es el 60% del promedio final
// El examen de medio curso es el 15% del promedio final
// El examen final es el 25% del promedio final

#include "iostream"
using namespace std;

int main()
{
    float t1, t2, t3, t4, emc, efc;
    float t_promedio, promedio;
    cout << "Ingrese la nota de su TAREA 01 ";
    cin >> t1;
    cout << "Ingrese la nota de su TAREA 02 ";
    cin >> t2;
    cout << "Ingrese la nota de su TAREA 03 ";
    cin >> t3;
    cout << "Ingrese la nota de su TAREA 04 ";
    cin >> t4;
    cout << "Ingrese la nota del EXAMEN DE MEDIO CURSO: ";
    cin >> emc;
    cout << "Ingrese la nota del EXAMEN FINAL: ";
    cin >> efc;
    t_promedio = (t1 + t2 + t3 + t4)/4;
    promedio = (t_promedio*0.6)+(emc*0.15)+(efc*0.25);
    cout << "El promedio final es: " << promedio;

    return 0;
}