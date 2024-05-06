#include <iostream>
#include <string>
using namespace std;

void printSubstring(const string& str, int start_index, int length) {
    // Print characters within the specified range
    for (int i = start_index; i < start_index + length && i < str.length(); ++i) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    // Example string
    string str = "Hello, World!";
    
    // Starting index and length of the substring
    int start_index = 7;
    int length = 5;
    
    // Call the function to print the substring
    printSubstring(str, start_index, length);
    
    return 0;
}
