// Realice un programa que permita de ingreso de una frase y luego muestre la cantidad de
// vocales “A” y la cantidad de letras “L” con las que cuenta

#include <iostream>
using namespace std;

int main()
{
    char frase[50];
    int i, cont_a, cont_l;
    cont_a = 0;
    cont_l = 0;
    cout << "Ingrese una frase: ";
    cin.getline(frase, 50);
    for (i = 0; i <= 50; i++)
    {
        if (('a' == frase[i]) || ('A' == frase[i]))
        {
            cont_a++;
        }
        else if (('l' == frase[i]) || ('L' == frase[i]))
        {
            cont_l++;
        }
    }

    cout << "La cantidad de 'A' en: " << frase << " es: " << cont_a << endl;
    cout << "La cantidad de 'L' en: " << frase << " es: " << cont_l << endl;

    return 0;
}