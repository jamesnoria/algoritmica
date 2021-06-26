#include "iostream"
#include "math.h"
using namespace std;

int main()
{
    int num, cont;
    cout << "Limite: ";
    cin >> num;
    cont=0;
    while(cont<=num)
    {
        cout<<cont<<" -> "<<sqrt(cont)<<" | "<<pow(cont,2)<<" | "<<pow(cont,3)<<endl;
        cont++;
    }
    return 0;
}