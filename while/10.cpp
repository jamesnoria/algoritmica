#include "iostream"
using namespace std;

int main()
{
    int dato, suma,dato_loop,cont;
    cout << "Ingrese la cantidad de datos a ingresar: ";
    cin >> dato;
    while(dato <=0)
    {
        cout << "La cantidad no es permitida\n";
        cout << "Ingrese la cantidad de datos a ingresar: ";
        cin >> dato;
    }
    cont=1;
    suma = 0;
    while(cont<=dato)
    {
        cout<<"Dato "<<cont<<" : ";
        cin>>dato_loop;
        if (dato_loop%2==0)
        {
            suma=suma+dato_loop;
        }
        cont++;
    }
    cout << "La suma de los pares es: " << suma<<endl;
    return 0;
}