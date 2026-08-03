// Ejercicio Array 11.- Programa que permite fusionar dos arreglos en
// uno solo que contenga todos los elementos.

#include <iostream>
using namespace std;

const int N1 = 3, N2 = 4;

int main() {
    int arreglo1[N1] = {1, 2, 3};
    int arreglo2[N2] = {4, 5, 6, 7};
    int fusionado[N1 + N2];

    for (int i = 0; i < N1; i++) {
        fusionado[i] = arreglo1[i];
    }
    for (int i = 0; i < N2; i++) {
        fusionado[N1 + i] = arreglo2[i];
    }

    cout << "Arreglo fusionado: ";
    for (int i = 0; i < N1 + N2; i++) {
        cout << fusionado[i] << " ";
    }
    cout << endl;

    return 0;
}
