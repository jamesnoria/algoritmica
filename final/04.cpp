// Realice un programa en C++, con arreglos, que permita el ingreso de N números enteros a
// un arreglo y luego que pase a otro arreglo sólo los primos. Al final muestre el arreglo de primos y el promedio de primos

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i, k, j, primo=0;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    int arr1[n]; //definimos el arreglo
    int arr2[50];
    // insertamos elementos en el arreglo:
    for (i = 0; i <= n - 1; i++)
    {
        cout << "A[" << i << "]: ";
        cin >> k;
        arr1[i] = k;
    }
    // separamos los numeros primos
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= int(sqrt(arr1[i])); j++)
        {
            if (arr1[i] % j == 0)
            {
                cout << arr1[i] << " ES PRIMO\n";
            }
        }
    }

    return 0;
}