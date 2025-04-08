/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

void verificarmenores(int a, int b, int c) {
    if (a < 10 && b < 10 && c < 10) {
        cout << "todo/s los numero/s son menores a 10 ¬w¬" << endl;
    } else {
        cout << "no son menor/es a 10 -w-" << endl;
    }
}

int main() {
    int n1, n2, n3;
    cout << "ingresa 3 numeros OwO: ";
    cin >> n1 >> n2 >> n3;
    verificarmenores(n1, n2, n3);
    return 0;
}