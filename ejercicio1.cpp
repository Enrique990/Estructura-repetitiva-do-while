#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number = 0, sum = 0;
    while (number != 9999)
    {
        sum += number;
        cout << "Dime un numero: ";
        cin >> number;
    }

    if (sum>0)
    {
        cout << "La suma es " << sum << endl;
        cout << "La suma es mayor que 0" << endl;
    } else if (sum<0)
    {
        cout << "La suma es " << sum << endl;
        cout << "La suma es menor que 0" << endl;
    } else if (sum==0)
    {
        cout << "La suma es " << sum << endl;
        cout << "La suma es igual a 0" << endl;
    }

    return 0;
}
