/*Crear un programa que solicite 15 numeros negativos y que los muestre en positivo y mostrar el resultado*/


#include <iostream>
using namespace std;
int main() {
    int numbers[15];
    
    cout << "Ingrese 15 numeros negativos:" << endl;
    
    for (int i = 0; i < 15; i++) {
        cin >> numbers[i];
    }
    
    cout << "Numeros en positivo:" << endl;
    
    for (int i = 0; i < 15; i++) {
        cout << abs(numbers[i]) << endl;
    }
    
    return 0;
}