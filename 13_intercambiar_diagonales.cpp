#include <iostream>
using namespace std;

const int MAX = 100;

void intercambiarDiagonales(int matriz[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][n - 1 - i];
        matriz[i][n - 1 - i] = temp;
    }
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

    intercambiarDiagonales(matriz, n);

    cout << "La matriz con las diagonales intercambiadas es:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
