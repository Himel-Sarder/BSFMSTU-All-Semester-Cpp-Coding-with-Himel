//The process of obtaining data members and functions from one class to another class is called inheritance.

#include<bits/stdc++.h>

using namespace std;

class Person{  //parent class / Base class / Super class
    public:
        void display(){
            cout << "I am Himel" << endl;
        }
};

class student:public Person{  //Child class / Derived class / Sub class
    public:
        void display(){
            cout << "I am a student of CSE" << endl;
        }
};
int main(){
    Person P;
    P.display();
    student S;
    S.display();
}

//Himel Sarder
//Dept. of CSE, BSFMSTU
