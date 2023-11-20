#include<bits/stdc++.h>

using namespace std;

class Person{
    public:
        void display(){
            cout << "I am Himel" << endl;
        }
};

class student:public Person{
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