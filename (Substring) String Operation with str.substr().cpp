#include <iostream>
#include <string>
using namespace std;

int main() {
    // Example string
    string str = "Hello, World!";

    // Substring starting from index 7 to the end of the string
    string substr1 = str.substr(7);
    cout << "Substring 1: " << substr1 << endl;

    // Substring starting from index 7 with a length of 5 characters
    string substr2 = str.substr(7, 5);
    cout << "Substring 2: " << substr2 << endl;

    return 0;
}
