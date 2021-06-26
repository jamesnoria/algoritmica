#include "iostream"
using namespace std;

int main()
{
    int num, cont;
    cout << "Tabla del: ";
    cin >> num;
    cont=0;
    while(cont<=20)
    {
        cout<<num<<" X "<<cont<<" = "<<num*cont<<endl;
        cont++;
    }
    return 0;
}