// Ejercicio Array 16.- Programa que permite calcular la matriz
// transpuesta de una matriz dada.

#include <iostream>
using namespace std;

const int FILAS = 2, COLUMNAS = 3;

int main() {
    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int transpuesta[COLUMNAS][FILAS];

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < COLUMNAS; i++) {
        for (int j = 0; j < FILAS; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
