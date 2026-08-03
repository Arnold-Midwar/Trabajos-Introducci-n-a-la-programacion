// Puntero 12.- Programa que permite contar el número de vocales en
// una cadena de texto utilizando un puntero.

#include <iostream>
using namespace std;

int contarVocales(char *p) {
    int contador = 0;
    while (*p != '\0') {
        char c = tolower(*p);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            contador++;
        }
        p++;
    }
    return contador;
}

int main() {
    char texto[100];

    cout << "Ingresa una frase: ";
    cin.getline(texto, 100);

    int vocales = contarVocales(texto);

    cout << "Número de vocales: " << vocales << endl;

    return 0;
}
