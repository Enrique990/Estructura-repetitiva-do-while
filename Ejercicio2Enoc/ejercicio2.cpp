#include <iostream>
using namespace std;

void leeNumeros() {
    int num, cont = 0;
    cout << "Introduzca 15 numeros negativos: " << endl;
    for(; cont < 15; cont++) {
        cin >> num;
        if(num < 0)
            cout << "En forma positiva: " << num * -1 << endl;
        else
            cont--;
    }
}

int main() {
    leeNumeros();
    return 0;
}