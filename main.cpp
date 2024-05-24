#include<iostream>
#include "ejercicio1.cpp"
#include "ejercicio2.cpp"
#include "ejercicio3.cpp"
#include "ejercicio4.cpp"
#include "ejercicio5.cpp"
#include "ejercicio6.cpp"
using namespace std;

int main()
{
    int ejercicio;

    system("cls||clear");
    cout << "\nBienvenido!" << endl;
    cout << "Que ejercicio desea ejecutar? (1-6)" << endl;
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Ejercicio 1" << endl;
    cout << "2. Ejercicio 2" << endl;
    cout << "3. Ejercicio 3" << endl;
    cout << "4. Ejercicio 4" << endl;
    cout << "5. Ejercicio 5" << endl;
    cout << "6. Ejercicio 6" << endl;
    cout << "7. Salir" << endl;
    cout << "Su opcion: ";
    cin >> ejercicio;

    switch (ejercicio)
    {
    case 1:
        int pregunta;
        system("cls||clear");
        ejercicio1();
        system("pause");
        system("cls||clear");
        cout << "\nDesea ejecutar otro ejercicio?" << endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cout << "Su opcion (1 para si, 2 para no): ";
        cin >> pregunta;
        if (pregunta==1)
        {
            main();
        }else if (pregunta==2)
        {
            cout << "\nGracias por utilizar el programa, hasta luego";
            exit(0);
        }else{
            cout << "\nOpcion invalida, usted saldra del programa";
            exit(0);
        }
        break;
    case 2:
        system("cls||clear");
        leeNumeros();
        system("pause");
        system("cls||clear");
        cout << "\nDesea ejecutar otro ejercicio?" << endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cout << "Su opcion (1 para si, 2 para no): ";
        cin >> pregunta;
        if (pregunta==1)
        {
            main();
        }else if (pregunta==2)
        {
            cout << "\nGracias por utilizar el programa, hasta luego";
            exit(0);
        }else{
            cout << "\nOpcion invalida, usted saldra del programa";
            exit(0);
        }
        break;
    case 3:
        system("cls||clear");
        solicitarNumeros();
        system("pause");
        system("cls||clear");
        cout << "\nDesea ejecutar otro ejercicio?" << endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cout << "Su opcion (1 para si, 2 para no): ";
        cin >> pregunta;
        if (pregunta==1)
        {
            main();
        }else if (pregunta==2)
        {
            cout << "\nGracias por utilizar el programa, hasta luego";
            exit(0);
        }else{
            cout << "\nOpcion invalida, usted saldra del programa";
            exit(0);
        }
        break;
    case 4:
        system("cls||clear");
        sumaImpares();
        system("pause");
        system("cls||clear");
        cout << "\nDesea ejecutar otro ejercicio?" << endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cout << "Su opcion (1 para si, 2 para no): ";
        cin >> pregunta;
        if (pregunta==1)
        {
            main();
        }else if (pregunta==2)
        {
            cout << "\nGracias por utilizar el programa, hasta luego";
            exit(0);
        }else{
            cout << "\nOpcion invalida, usted saldra del programa";
            exit(0);
        }
        break;
    case 5:
        system("cls||clear");
        showMult();
        system("pause");
        system("cls||clear");
        cout << "\nDesea ejecutar otro ejercicio?" << endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cout << "Su opcion (1 para si, 2 para no): ";
        cin >> pregunta;
        if (pregunta==1)
        {
            main();
        }else if (pregunta==2)
        {
            cout << "\nGracias por utilizar el programa, hasta luego";
            exit(0);
        }else{
            cout << "\nOpcion invalida, usted saldra del programa";
            exit(0);
        }
        break;
    case 6:
        system("cls||clear");
        programaBanco();
        system("pause");
        system("cls||clear");
        cout << "\nDesea ejecutar otro ejercicio?" << endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cout << "Su opcion (1 para si, 2 para no): ";
        cin >> pregunta;
        if (pregunta==1)
        {
            main();
        }else if (pregunta==2)
        {
            cout << "\nGracias por utilizar el programa, hasta luego";
            exit(0);
        }else{
            cout << "\nOpcion invalida, usted saldra del programa";
            exit(0);
        }
        break;
    case 7:
        system("cls||clear");
        cout << "\nGracias por utilizar el programa, hasta luego";
        exit(0);
    default:
        cout << "\nOpcion invalida. Intente de nuevo." << endl;
        system("pause");
        main();
        break;
    }
    return 0;
}
