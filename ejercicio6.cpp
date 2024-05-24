#include <iostream>
#define MAX_REG 100

using namespace std;

int main(int argc, char const *argv[])
{
    struct CUENTAS
    {
        string numeroCuenta;
        float saldoActual = 0;
    };

    CUENTAS cuentasCliente[100];
    CUENTAS nuevoCliente;

    int opcion;
    int cantidadClientes;
    string cuentaTemp;
    float numero;

    do
    {
        cout << "1. Registrar cuenta" << endl;
        cout << "1. Actualiza saldo de cuenta" << endl;
        cout << "2. Mostrar registro" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingresa el numero de cuenta: ";
            cin >> nuevoCliente.numeroCuenta;
            cuentasCliente[cantidadClientes].numeroCuenta = nuevoCliente.numeroCuenta;
            cantidadClientes++;
            break;
        case 2:
            cout << "Dime tu numero de cuenta: ";
            cin >> cuentaTemp;

            for (int i = 0; i < cantidadClientes; i++)
            {
                if (cuentaTemp == cuentasCliente[i].numeroCuenta)
                {
                    cout << "Actualizando tu saldo...";
                    cout << "Cantidad a sumar/restar a la cuenta: ";
                    cin >> numero;

                    cuentasCliente[i].saldoActual = cuentasCliente[i].saldoActual + numero;

                    if (numero < 0)
                    {
                        break;
                    }
                }
            }
            break;
        case 3:
            cout << "Saliendo" << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }

    } while (opcion != 3);

    return 0;
}
