/*3. Escriba un programa que solicite ingresar diferentes números la
vez y que pueda repetir indefinidamente si el usuario lo desea (que el
ordenador pregunte ¿Quiere continuar? y la persona pueda responder
S o N.
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char respuesta;
    do {
        int numero;
        cout << "Ingresa un numero: ";
        cin >> numero;
        cout << "Quiere ingresar otro numero? (S/N): ";
        cin >> respuesta;
    } while (respuesta == 's');
    return 0;
}