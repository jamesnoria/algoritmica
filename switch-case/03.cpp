#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <ioma
using namespace std;

int main()
{
    int op, cont, i, num, tam, esp;
    char resp;
    string frase;

    do
    {
        cout << "===== MENU DE OPCIONES =====\n";
        cout << "[1] Raiz Cuadrada\n";
        cout << "[2] Numero Primo\n";
        cout << "[3] Func. Trig.\n";
        cout << "[4] Cuenta letras\n";
        cout << "============================\n";
        cout << "Ahora elija una opción: ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "--- Raiz Cuadrada ---\n";
            cout << "Ingrese un número: ";
            cin >> num;
            cout << "La raiz de " << num << " = " << sqrt(num);
            break;
        case 2:
            cout << "--- Número Primo ---\n";
            cout << "Ingrese un número: ";
            cin >> num;
            cont = 0;
            i = 1;
            while (i <= num)
            {
                if (num % i == 0)
                {
                    cont++;
                }
                i++;
            }
            if (cont == 2)
            {
                cout << num << " SI es primo";
            }
            else
            {
                cout << num << " NO es primo";
            }
            break;
        case 3:
            cout << "Martes";
            break;
        case 4:
            system("clear");
            cout << "---CUENTA CARACTERES----\n";
            cout << "\nIngrese una frase: ";
            // fflush(stdin);
            getline(cin, frase);
            tam = frase.size();
            i = 0;
            esp = 0;
            while (i < tam)
            {
                if (frase[i] == ' ')
                    esp++;
                i++;
            }

            cout << "\nLa frase tiene: " << tam - esp << " caracteres...";
            cout << "\nLa frase tiene: " << esp << " espacios en blanco...";
            break;

        default:
            cout << "ERROR";
            break;
        }
        cout << "\n¿Desea continuar? [s/n]: ";
        cin >> resp;
    } while (resp == 's' or resp == 'S');

    cout << "\nGracias, hasta pronto" << endl;
    return 0;
}