//Algoritmo que calcule el salario mensual,
//sabiendo el número de horas trabajadas y el valor por hora.

#include "iostream"
using namespace std;

int main()
{
    float salario_mensual, valor_hora;
    int horas_trabajadas;
    cout << "Inserte el valor por hora trabajadas: ";
    cin >> valor_hora;
    cout << "Inserte las horas trabajadas por empleado: ";
    cin >> horas_trabajadas;
    salario_mensual = horas_trabajadas * valor_hora;
    cout << "El salario mensual es: S/." << salario_mensual;

    return 0;
}
