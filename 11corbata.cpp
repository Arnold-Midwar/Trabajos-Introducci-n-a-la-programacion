#include <iostream>
using namespace std;

int main() {
    int n = 3;

    // Mitad superior
    for (int i = 1; i <= n; i++) {
        // Izquierdo
        for (int j = 1; j <= i; j++) cout << "* ";
        // Espacio central (solo en filas que no son la del medio)
        if (i < n)
            for (int j = 1; j <= 2 * (n - i); j++) cout << "  ";
        // Derecho
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }

    // Mitad inferior
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "* ";
        if (i < n)
            for (int j = 1; j <= 2 * (n - i); j++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }

    return 0;
}