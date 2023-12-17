#include <bits/stdc++.h>

using namespace std;
    class MyNumber {
    public:
    int value;
    MyNumber(int val) : value(val) {}

    // Overload the + operator to add two MyNumber objects
    MyNumber operator+(MyNumber& obj){
        return MyNumber(value + obj.value);
    }
};
int main() {
    MyNumber num1(5);
    MyNumber num2(3);
    MyNumber result = num1 + num2; // Calls the overloaded + operator
    cout << "Result: " << result.value << endl;
    return 0;
}
