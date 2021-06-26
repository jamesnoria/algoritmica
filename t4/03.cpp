#include <iostream>
using namespace std;

int main()
{
    int num, x, i, k, nuevo;

    cout << "¿Cuantos elementos desea tener?: ";
    cin >> x;
    int a[x]; //dimension del arreglo
    for (i = 0; i < x; i++)
    {
        cout<<"A["<<i<<"]: ";
        cin >>k;
        a[i] = k;
    }
    cout << "¿Por que número desea multiplicar?: ";
    cin >> num;
    for (i = 0; i < x; i++)
    {
        a[i] = a[i]*num;
        cout << "A["<<i<<"]: "<<a[i] << endl;
    }

    return 0;
}