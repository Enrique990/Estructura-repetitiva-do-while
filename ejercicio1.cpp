#include<iostream>
using namespace std;

int ejercicio1();

int ejercicio1()
{
    cout << "\nBienvenido!" << endl;
    cout << "Introduzca numeros y se sumaran hasta que escriba el numero 9999\n" << endl;
    int number = 0, sum = 0;
    while (number != 9999)
    {
        sum += number;
        cout << "Dime un numero: ";
        cin >> number;
    }

    if (sum>0)
    {
        cout << "\nLa suma es " << sum << endl;
        cout << "La suma es mayor que 0" << endl;
    } else if (sum<0)
    {
        cout << "\nLa suma es " << sum << endl;
        cout << "La suma es menor que 0" << endl;
    } else if (sum==0)
    {
        cout << "\nLa suma es " << sum << endl;
        cout << "La suma es igual a 0" << endl;
    }

    return 0;
}
