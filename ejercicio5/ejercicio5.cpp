/*Escribe un programa que muestre los múltiplos de 3 y 5
simultáneamente a partir del 15 hasta el 45.
*/

#include <iostream>
using namespace std;

void showMult();

int main(int argc, char const *argv[])
{
    showMult();
    return 0;
}

void showMult()
{
    for(int i = 15; i<=45; i++){
        if(i%3 == 0 && i%5 == 0){
            cout << i << endl;
        }
    }
}

