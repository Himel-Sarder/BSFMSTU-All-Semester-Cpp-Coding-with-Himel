#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }

        // Print increasing characters
        for (int k = 0; k <= i; k++) {
            cout << char('A' + k) << " ";
        }

        // Print decreasing characters
        for (int l = i - 1; l >= 0; l--) {
            cout << char('A' + l) << " ";
        }

        cout << endl;
    }

    return 0;
}
