#include <iostream>
using namespace std;

int main()
{
    int num, cont, edad, nom_may, edad_men, cont_nom, cont_m, cont_f;
    string nombre, print_nom, print_nom2, sexo;

    cout << "¿De cuantos alumnos desea ingresar sus datos?: ";
    cin >> num;
    cont = 1;
    cont_m = 0;
    cont_f = 0;
    while (cont <= num)
    {
        cout << "=== ALUMNO 0" << cont << " ===\n";
        cout << "NOMBRE: ";
        cin.ignore(); //evitar espacios
        getline(cin, nombre);
        cont_nom = nombre.length();
        cout << "SEXO [M-F]: ";
        cin >> sexo;
        cout << "EDAD: ";
        cin >> edad;
        // Porcentaje de hombres y mujeres:
        if (sexo == "m" or sexo == "M")
        {
            cont_m++;
        }
        else if (sexo == "f" or sexo == "F")
        {
            cont_f++;
        }
        if (cont == 1)
        {
            nom_may = cont_nom;  //nom_may = nombre mayor
            edad_men = edad;     //edad_men = edad menor
            print_nom = nombre;  // captura nombre para contador de caracteres
            print_nom2 = nombre; // captura nombre para contador de edad
        }
        // El nombre mas largo ingresado:
        if (cont_nom > nom_may)
        {
            nom_may = cont_nom;
            print_nom = nombre;
        }
        // La menor edad ingresada:
        if (edad < edad_men)
        {
            edad_men = edad;
            print_nom2 = nombre;
        }
        cont++;
    }

    cout << "El nombre más largo es el de " << print_nom << " con " << nom_may << " caracteres.\n";
    cout << "El alumno de menor edad es " << print_nom2 << " con " << edad_men << " años.\n";
    cout << "El porcentaje de varones es: " << (100 * cont_m) / (cont_m + cont_f) << "% y de mujeres es: " << (100 * cont_f) / (cont_m + cont_f) << "%\n";

    return 0;
}