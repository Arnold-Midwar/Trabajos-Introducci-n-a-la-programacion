#include <iostream>
using namespace std;

const int MAX = 100;

bool esSimetrica(int matriz[MAX][MAX], int filas, int columnas) {
    // Verificar si la matriz es cuadrada
    if (filas != columnas) {
        return false;
    }

    // Verificar si la matriz es simétrica
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int filas, columnas;
    int matriz[MAX][MAX];

    cout << "Ingrese el número de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> columnas;

    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el elemento en la posición (" << i << ", " << j << "): ";
            cin >> matriz[i][j];
        }
    }

    if (esSimetrica(matriz, filas, columnas)) {
        cout << "La matriz es simétrica." << endl;
    } else {
        cout << "La matriz no es simétrica." << endl;
    }

    return 0;
}
