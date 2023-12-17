//virtual functions + inheritance

#include <iostream>
using namespace std;

class Animal {
    public:
    virtual void makeSound() {
    cout << "Animal makes a sound." << endl;
    }
};
class Dog : public Animal {
    public:
    void makeSound() override {
    cout << "Dog barks." << endl;
    }
};
int main() {
    Animal* animal = new Dog;
    animal->makeSound(); // Calls Dog's makeSound at runtime
    //delete animal;
 return 0;
}
//HIMEL SARDER
//DEPT. OF CSE, BSFMSTU

