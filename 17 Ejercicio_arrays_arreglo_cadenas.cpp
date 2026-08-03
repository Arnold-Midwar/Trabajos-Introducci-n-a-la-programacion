// Ejercicio Array 17.- Programa que permite almacenar y mostrar un
// arreglo de cadenas de texto (nombres).

#include <iostream>
#include <string>
using namespace std;

const int N = 4;

int main() {
    string nombres[N] = {"Ana", "Luis", "Marta", "Carlos"};

    cout << "Lista de nombres:" << endl;
    for (int i = 0; i < N; i++) {
        cout << i + 1 << ". " << nombres[i] << endl;
    }

    return 0;
}
