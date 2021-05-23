// Una juguetería tiene mucho éxito en dos de sus productos: payasos y muñecas.
// Suele hacer venta por correo y la empresa de logística les cobra por peso de
// cada paquete así que deben calcular el peso de los payasos y muñecas que saldrán
// en cada paquete a demanda. Cada payaso pesa 112 g y cada muñeca 75 g.
// Escribir un programa que lea el número de payasos y muñecas vendidos en el último
// pedido y calcule el peso total del paquete que será enviado

#include "iostream"
using namespace std;

int main()
{
    int peso_payasos, peso_munecas, peso_total, payasos, munecas;
    cout << "¿Cuantos payasos fueron vendidos?: ";
    cin >> payasos;
    cout << "¿Cuantas muñecas fueron vendidas?: ";
    cin >> munecas;
    peso_payasos = payasos*112;
    peso_munecas = munecas*75;
    peso_total = peso_payasos + peso_munecas;
    cout << "El peso total del paquete en gramos es: " << peso_total << " gramos.";

    return 0;
}