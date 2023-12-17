#include <iostream>
using namespace std;

class MyNumber {
     private:
         int value;
     public:
         MyNumber(int val) : value(val) {}
     int getValue() {
         return value;
     }
     // Overload the negation (-) operator
     MyNumber operator-() {
         return MyNumber(-value);
     }
};

int main() {
     MyNumber num(5);
     cout << "Original Value: " << num.getValue() << endl;
     // Use the overloaded negation operator
     MyNumber negatedNum = -num;
     cout << "Negated Value: " << negatedNum.getValue() << endl;
     return 0;
}
//HIMEL SARDER
//DEPT. OF CSE, BSFMSTU
