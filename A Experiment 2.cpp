#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    int operation;   //char operation

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choice operation : \n1. +\n2. -\n3. *\n4. /\n"; //Enter operation(+,-,*,/):
    cin >> operation;

    switch (operation) {
        case 1: //case '+'
            cout << "Sum: " << num1 + num2 << endl;
            break;
        case 2: //case '-'
            cout << "Difference: " << num1 - num2 << endl;
            break;
        case 3: //case '*'
            cout << "Product: " << num1 * num2 << endl;
            break;
        case 4: //case '/'
            if (num2 != 0) {
                cout << "Quotient: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operation entered." << endl;
            break;
    }

    return 0;
}
