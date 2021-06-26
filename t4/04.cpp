#include <iostream>
using namespace std;

int main()
{
    int num, i, k, sum;
    cout << "¿Cuantos números desea ingresar?: ";
    cin >> num;
    int a[num];
    sum = 0;
    for (i = 0; i < num; i++)
    {
        cout <<"A["<<i<<"]: ";
        cin >> k;
        a[i]=k;
    }
    cout<<"CASILLEROS IMPARES:"<<endl;
    for (i = 0; i < num; i++)
    {
        if (i%2!=0)
        {
           cout<<"A["<<i<<"]: "<<a[i]<<endl;
           sum+=a[i];
        }
    }
    cout << "La suma de los impares es: " << sum << endl;

    return 0;
}