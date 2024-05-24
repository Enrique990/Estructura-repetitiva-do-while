/*Escriba el programa que calcule la suma de los números impares
mientras sean distintos de cero.*/

#include <iostream>
#include <string>
using namespace std;

int sumaImpares()
{
    int num, suma = 0;
    cout << "ingresa un numero:";
    cin >> num;
    while (num != 0)
    {
        if (num % 2 != 0)
        {
            suma += num;
        }
        cout << "ingresa un numero:";
        cin >> num;
    }
    cout << "la suma de los numeros impares es: " << suma << endl;

    return 0;
}