#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double F;
    cout << "Enter a Fahrenheit temperature: ";
    cin >> F;

    cout << "Celsius temperature: " << fixed << setprecision(2) << (F - 32) * 5 / 9 << endl;

    return 0;
}
