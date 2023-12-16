/*
A destructor is a special member function that is automatically called in C++ 
programming when an object is going to be destroyed or exits its scope. The 
name for a destructor in C++ is the same as the class name followed by the 
tilde (~) symbol.
*/
//Syntax:
class MyClass {
  public:
    MyClass() { // Constructor
// Code
  }
  ~MyClass() { // Destructor
// Code
  }
};

//Example
#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called\n";
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called\n";
    }
};

int main() {
    // Creating an object of MyClass
    MyClass obj;

    // The object goes out of scope when main() finishes
    // The destructor is automatically called at this point
    return 0;
}

/*
-------------------------
| Himel Sarder          |
| Dept. Of CSE, BSFMSTU |
|------------------------
*/
