#include "iostream"
using namespace std;

int main()
{
    float num1,num2;
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese un numero: ";
    cin >> num2;
    if (num1 < num2)
    {
        cout << num1 << " y " << num2 << " en orden ascendente, seria: " << num1 << ", " << num2;
    }
    else
    {
        cout << num1 << " y " << num2 << " en orden ascendente, seria: " << num2 << ", " << num1;
    }

    return 0;

}