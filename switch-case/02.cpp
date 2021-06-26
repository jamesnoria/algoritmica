#include <iostream>
using namespace std;

int main()
{
    int dia;
    char resp;

    do
    {
        cout << "Inserte un número de día de la semana: ";
        cin >> dia;
        switch (dia)
        {
        case 1:
            cout << "Domingo";
            break;
        case 2:
            cout << "Lunes";
            break;
        case 3:
            cout << "Martes";
            break;
        case 4:
            cout << "Miercoles";
            break;
        case 5:
            cout << "Jueves";
            break;
        case 6:
            cout << "Viernes";
            break;
        case 7:
            cout << "Sabado";
            break;

        default:
            cout << "ERROR";
            break;
        }
        cout << "\n¿Desea continuar? [s/n]: ";
        cin >> resp;
    } while(resp=='s' or resp=='S');

    cout << "\nGracias, hasta pronto" << endl;
    return 0;
}