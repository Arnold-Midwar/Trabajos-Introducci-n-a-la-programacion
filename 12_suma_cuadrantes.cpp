#include <iostream>
using namespace std;

const int MAX = 100;

void sumarCuadrantes(int matriz[MAX][MAX], int n) {
    int sumaCuadrante1 = 0;
    int sumaCuadrante2 = 0;
    int sumaCuadrante3 = 0;
    int sumaCuadrante4 = 0;

    // Sumar los elementos del cuadrante 1 (esquina superior izquierda)
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            sumaCuadrante1 += matriz[i][j];
        }
    }

    // Sumar los elementos del cuadrante 2 (esquina superior derecha)
    for (int i = 0; i < n / 2; i++) {
        for (int j = n / 2; j < n; j++) {
            sumaCuadrante2 += matriz[i][j];
        }
    }

    // Sumar los elementos del cuadrante 3 (esquina inferior izquierda)
    for (int i = n / 2; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            sumaCuadrante3 += matriz[i][j];
        }
    }

    // Sumar los elementos del cuadrante 4 (esquina inferior derecha)
    for (int i = n / 2; i < n; i++) {
        for (int j = n / 2; j < n; j++) {
            sumaCuadrante4 += matriz[i][j];
        }
    }

    cout << "La suma del cuadrante 1 es: " << sumaCuadrante1 << endl;
    cout << "La suma del cuadrante 2 es: " << sumaCuadrante2 << endl;
    cout << "La suma del cuadrante 3 es: " << sumaCuadrante3 << endl;
    cout << "La suma del cuadrante 4 es: " << sumaCuadrante4 << endl;
}

int main() {
    int n;
    int matriz[MAX][MAX];

    cout << "Ingrese el tamaño de la matriz cuadrada: ";
    cin >> n;

    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el elemento en la posición (" << i << ", " << j << "): ";
            cin >> matriz[i][j];
        }
    }

    sumarCuadrantes(matriz, n);

    return 0;
}
