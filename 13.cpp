#include <iostream>
using namespace std;

void figura13(int n) {
    // Mitad superior
    for (int i = 1; i <= n; i++) {
        // Triángulo izquierdo (crece hacia la izquierda)
        for (int j = 1; j <= n - i; j++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << "* ";

        // Espacio central
        for (int j = 1; j <= 4; j++) cout << "  ";

        // Triángulo derecho (crece hacia la derecha)
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }

    // Mitad inferior
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << "* ";

        for (int j = 1; j <= 4; j++) cout << "  ";

        for (int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }
}

int main() {
    int n = 3;
    figura13(n);
    return 0;
}