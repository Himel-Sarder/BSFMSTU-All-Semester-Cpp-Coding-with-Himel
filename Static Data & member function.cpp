#include<bits/stdc++.h>

using namespace std;

class MyClass {
public:
    static int count;
    static void Print(){
        cout << "Hello";
    } 
};

int MyClass::count;

int main() {
    MyClass obj;
    obj.count = 10;

    cout << obj.count << endl;
    obj.Print();
}
//Himel Sarder
//Dept. of CSE, BSFMSTU
