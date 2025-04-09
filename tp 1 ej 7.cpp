/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void cajero() {
    float saldo = 10000;
    int opcion;
    cout << "1. Consultar saldo\n2. Depositar\n3. Retirar\nElija una opcion: ";
    cin >> opcion;

    if (opcion == 1)
        cout << "Saldo: $" << saldo << endl;
    else if (opcion == 2) {
        float deposito;
        cout << "Monto a depositar: ";
        cin >> deposito;
        saldo += deposito;
        cout << "Nuevo saldo: $" << saldo << endl;
    }
    else if (opcion == 3) {
        float retiro;
        cout << "Monto a retirar: ";
        cin >> retiro;
        if (retiro <= saldo) {
            saldo -= retiro;
            cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
        } else {
            cout << "Saldo insuficiente." << endl;
        }
    } else {
        cout << "Opcion invalida." << endl;
    }
}

int main() {
    cajero();
    return 0;
}
