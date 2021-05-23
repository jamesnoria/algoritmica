// Algoritmo que convierta kilómetros en metros y en centímetros.

#include "iostream"
using namespace std;

int main()
{
    float kms, mts, cms;
    cout << "Inserte la cantidad en kms a convertir: ";
    cin >> kms;
    mts = kms * 1000;
    cms = kms * 100000;
    cout << kms << "kms, son: " << mts << "mts. y " << cms << "cms.";

    return 0;
}