#include <iostream>
using namespace std;

int main() {
    int n = 3;

    // Mitad superior (converge)
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << "  ";
        cout << "*";
        for (int j = 1; j <= 2 * (i - 1); j++) cout << "  ";
        if (i > 1) cout << "  *";
        cout << "\n";
    }

    // Mitad inferior (diverge)
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << "  ";
        cout << "*";
        for (int j = 1; j <= 2 * (i - 1); j++) cout << "  ";
        cout << "  *";
        cout << "\n";
    }

    return 0;
}