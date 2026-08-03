// Ejercicio Array 9.- Programa que permite eliminar los elementos
// duplicados de un arreglo, mostrando únicamente los valores únicos.

#include <iostream>
using namespace std;

const int N = 8;

int main() {
    int arreglo[N] = {4, 8, 4, 3, 8, 7, 3, 9};
    int unicos[N];
    int contador = 0;

    for (int i = 0; i < N; i++) {
        bool repetido = false;
        for (int j = 0; j < contador; j++) {
            if (arreglo[i] == unicos[j]) {
                repetido = true;
                break;
            }
        }
        if (!repetido) {
            unicos[contador] = arreglo[i];
            contador++;
        }
    }

    cout << "Elementos únicos: ";
    for (int i = 0; i < contador; i++) {
        cout << unicos[i] << " ";
    }
    cout << endl;

    return 0;
}
