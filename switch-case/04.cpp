#include <iostream>
using namespace std;

int main()
{
    int num, i;
    cout << "¿Que número desea saber?: ";
    cin >> num;
    i = 0;
    for (i = 0; i<=15; i++)
    {
        cout << num << " X " << i << " = " << num*i << endl;
    }

    return 0;
}