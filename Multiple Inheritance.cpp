//A derived class with multiple base class is called multiple inheritance
#include<bits/stdc++.h>
using namespace std;

class Base1{
    public:
    string name;
    void print1(){
        cout << "Name : " << name << endl;
    }
};
class Base2{
    public:
    int id;
    void print2(){
        cout << "ID : " << id << endl;
    }
};
class Base3{
    public:
    int age;
    void print3(){
        cout << "Age : " << age << endl;
    }
};
class Derived:public Base1,public Base2,public Base3{
    public:
    string university;
    void print(){
        print1();
        print2();
        print3();
        cout << "University name : " << university << endl;
    }
};
int main(){
    Derived obj;
    obj.name="Himel";
    obj.id=22111121;
    obj.age=21;
    obj.university="BSFMSTU";

    //obj.printName();
    //obj.printId();
    //obj.printAge();
    //obj.printUniversity();
    obj.print();
    return 0;
}
//Himel Sarder
//Dept. Of CSE, BSFMSTU
