#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i, k, op;
    string seguir;
    cout << "¿Cuantos datos desea ingresar?: ";
    cin >> n;
    int arr[n];
    for (i = 0; i <= n - 1; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> k;
        arr[i] = k;
    }
    do
    {
        cout << " === MENU === \n";
        cout << "[1] Mostrar la raiz cuadrada de los pares positivos\n";
        cout << "[2] Mostrar la raiz cubica de los impares negativos\n";
        cout << "[3] Eliminar el primer elemento y mostrar el nuevo arreglo\n";
        cout << "OPCION: ";
        cin >> op;
        switch (op)
        {
        case 1:
            for (i = 0; i <= n - 1; i++)
            {
                if ((arr[i] % 2 == 0) and (arr[i] > 0))
                {
                    cout << "PAR POSITIVO"
                         << "\tRAIZ CUADRADA\n";
                    cout << arr[i] << "\t\t" << sqrt(arr[i]) << endl;
                }
            }
            break;
        case 2:
            for (i = 0; i <= n - 1; i++)
            {
                if ((arr[i] % 2 != 0) and (arr[i] < 0))
                {
                    cout << "IMPAR NEGATIVO"
                         << "\tRAIZ CUBICA\n";
                    cout << arr[i] << "\t\t" << cbrt(arr[i]) << endl;
                }
            }
            break;
        case 3:
            for (i = 0; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
                cout << "A[" << i << "]= " << arr[i] << endl;
            }
            break;
        default:
            cout << "OPCION INVALIDA...\n";
            break;
        }

        cout << "¿Desea continuar? [s/n]: ";
        cin >> seguir;

    } while (seguir == "s" or seguir == "S");

    return 0;
}