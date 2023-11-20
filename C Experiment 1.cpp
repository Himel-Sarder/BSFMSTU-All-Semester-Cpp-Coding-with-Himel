#include <iostream>

using namespace std;

// Global variable  
int globalVar = 100;

class MyClass {
    public:
        // Static variable
        static int staticVar;

        static void displayStaticVar() {
            cout << "Static variable inside MyClass: " << staticVar << endl;
        }
};

// Initialize the static variable
int MyClass::staticVar = 150;

int main() {
    cout << "Global variable: " << ::globalVar << endl;
    cout << "Static variable outside MyClass: " << MyClass::staticVar << endl;
    MyClass::displayStaticVar();

    return 0;
}
