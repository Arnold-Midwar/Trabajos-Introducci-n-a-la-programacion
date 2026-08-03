// Puntero 18.- Programa que permite recorrer una matriz (arreglo 2D)
// pasándola a una función mediante un puntero.

#include <iostream>
using namespace std;

const int FILAS = 2;
const int COLUMNAS = 3;

void imprimirMatriz(int (*matriz)[COLUMNAS], int filas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << *(*(matriz + i) + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Elementos de la matriz:" << endl;
    imprimirMatriz(matriz, FILAS);

    return 0;
}
