/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void calcularnivel(int total, int correctas) {
    float porcentaje = (correctas * 100.0) / total;

    if (porcentaje >= 90)
        cout << "nivel maximo" << endl;
    else if (porcentaje >= 75)
        cout << "nivel medio" << endl;
    else if (porcentaje >= 50)
        cout << "nivel regular" << endl;
    else
        cout << "Fuera de nivel" << endl;
}

int main() {
    int total, correctas;
    cout << "Total de preguntas: ";
    cin >> total;
    cout << "Correctas: ";
    cin >> correctas;
    calcularnivel(total, correctas);
    return 0;
}
