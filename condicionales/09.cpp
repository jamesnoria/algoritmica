#include "iostream"
#include "cmath"
using namespace std;

int main()
{
    float a,b,c,s,area_triangulo;
    cout << "Ingrese lados de un triangulo"
    cout << "Ingrese un valor para A: ";
    cin >> a;
    cout << "Ingrese un valor para B: ";
    cin >> b;
    cout << "Ingrese un valor para C: ";
    cin >> c;
    s = lround((a+b+c)/2);
    if ((a+b) > c)
    {
        area_triangulo = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "Su area es: " << area_triangulo << "\n";
        if (a == b and b == c and a == c)
        {
            cout << "EQUILATERO";
        }
        else if (a == b or b == c or a == c)
        {
            cout << "ISOSCELES";
        }
        else if (a != b and b != c and a != c)
        {
            cout << "ESCALENO";
        }
    }
    else
    {
        cout << "Los valores ingresados no cumplen el requerimiento";
    }

}