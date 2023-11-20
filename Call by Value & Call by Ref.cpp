#include <iostream>

using namespace std;

// Function to demonstrate call by value
void callByValue(int x, int y) {
    x = 30;
    y = 40;
}

// Function to demonstrate call by reference
void callByReference(int *x, int *y) {
    *x = 30;
    *y = 40;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    
    callByValue(num1, num2);
    cout << "After callByValue - num1 : " << num1 << " num2 : " << num2 << endl;

    callByReference(&num1, &num2);
    cout << "After callByReference - num1 : " << num1 << " num2 : " << num2 << endl;

    return 0;
}
