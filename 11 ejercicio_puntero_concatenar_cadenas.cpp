// Puntero 11.- Programa que permite concatenar dos cadenas de
// caracteres utilizando punteros (sin usar strcat).

#include <iostream>
using namespace std;

void concatenar(char *destino, const char *origen) {
    // Avanzar el puntero destino hasta el final de la cadena
    while (*destino != '\0') {
        destino++;
    }
    // Copiar los caracteres de origen al final de destino
    while (*origen != '\0') {
        *destino = *origen;
        destino++;
        origen++;
    }
    *destino = '\0';
}

int main() {
    char cadena1[50] = "Hola ";
    const char cadena2[] = "mundo!";

    concatenar(cadena1, cadena2);

    cout << "Cadena concatenada: " << cadena1 << endl;

    return 0;
}
