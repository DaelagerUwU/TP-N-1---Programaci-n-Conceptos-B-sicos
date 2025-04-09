/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void calcularprecio(int cantidad, float precio) {
    float total;
    if (cantidad == 1)
        total = precio;
    else if (cantidad == 2)
        total = precio * 2 * 0.9;
    else if (cantidad == 3)
        total = precio * 3 * 0.85;
    else if (cantidad == 4)
        total = precio * 4 * 0.8;
    else {
        cout << "maximo 4 entradas." << endl;
        return;
    }
    cout << "Total a pagar: $" << total << endl;
}

int main() {
    int cant;
    float precio;
    cout << "Cantidad de entradas: ";
    cin >> cant;
    cout << "precio por entrada: ";
    cin >> precio;
    calcularprecio(cant, precio);
    return 0;
}
