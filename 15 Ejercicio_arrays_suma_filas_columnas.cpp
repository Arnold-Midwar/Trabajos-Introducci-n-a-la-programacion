// Ejercicio Array 15.- Programa que permite calcular la suma de cada
// fila y cada columna de una matriz (arreglo bidimensional).

#include <iostream>
using namespace std;

const int FILAS = 3, COLUMNAS = 3;

int main() {
    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Suma de filas:" << endl;
    for (int i = 0; i < FILAS; i++) {
        int sumaFila = 0;
        for (int j = 0; j < COLUMNAS; j++) {
            sumaFila += matriz[i][j];
        }
        cout << "Fila " << i << ": " << sumaFila << endl;
    }

    cout << "Suma de columnas:" << endl;
    for (int j = 0; j < COLUMNAS; j++) {
        int sumaColumna = 0;
        for (int i = 0; i < FILAS; i++) {
            sumaColumna += matriz[i][j];
        }
        cout << "Columna " << j << ": " << sumaColumna << endl;
    }

    return 0;
}
