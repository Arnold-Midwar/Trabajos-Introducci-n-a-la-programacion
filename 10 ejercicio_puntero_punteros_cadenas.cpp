// Puntero 10.- Programa que permite recorrer e imprimir una cadena de
// caracteres utilizando un puntero tipo char.

#include <iostream>
using namespace std;

int main() {
    char texto[] = "Hola mundo";
    char *p = texto;

    cout << "Cadena recorrida con puntero: " << endl;
    while (*p != '\0') {
        cout << *p;
        p++;
    }
    cout << endl;

    return 0;
}
