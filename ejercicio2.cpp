#include <iostream>
#define numeros 15
using namespace std;

void leeNumeros();

void leeNumeros() {
    int num[numeros];
    int validation;
    
    cout << "Introduzca 15 numeros negativos: " << endl;
    for (int i = 0; i < numeros; i++)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> validation;
        if (validation<0)
        {
            num[i] = validation;
        }else
        {
            cout << "El numero debe ser menor que 0" << endl;
            i--;
        }
    }
    
    cout << "Los numeros en positivo son: " << endl;
    for (int j = 0; j < numeros; j++)
    {
        cout << "Numero " << j + 1 << ": " << num[j] * -1 << endl;
    }
    
}
