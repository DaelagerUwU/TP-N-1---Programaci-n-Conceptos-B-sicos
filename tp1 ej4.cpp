#include <iostream>
using namespace std;

void contarcifras(int numero) {
    if (numero < 10)
        cout << "tiene 1 cifra" << endl;
    else if (numero < 100)
        cout << "tiene 2 cifrast" << endl;
    else if (numero < 1000)
        cout << "tiene 3 cifras" << endl;
    else
        cout << "ERROR! Tiene mas de 3 cifras" << endl;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    contarcifras(num);
    return 0;
}
