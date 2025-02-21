#include <iostream>
using namespace std;

int main() {
    int n = 11; // Always odd

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' at borders, diagonals, and specific conditions
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == j || i + j == n - 1 || i == n / 2 || j == n / 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
