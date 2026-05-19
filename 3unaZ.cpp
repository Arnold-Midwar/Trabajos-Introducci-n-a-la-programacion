#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == n) {
            // Primera y última fila completas
            for (int j = 1; j <= n; j++) cout << "* ";
        } else {
            // Filas del medio, asterisco en diagonal
            for (int j = 1; j <= n - i; j++) cout << "  ";
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}