/*Function overriding is a feature that allow us to have a same 
function in a derived class which is already present in a Base class.*/

#include<bits/stdc++.h>
using namespace std;

class Base1{
    public:
    string name;
    void print(){
        cout << "Name : " << name << endl;
    }
};
class Base2{
    public:
    int id;
    void print(){
        cout << "ID : " << id << endl;
    }
};
class Base3{
    public:
    int age;
    void print(){
        cout << "Age : " << age << endl;
    }
};
class Derived:public Base1,public Base2,public Base3{
    public:
    string university;
    void print(){
        Base1::print();
        Base2::print();
        Base3::print();
        cout << "University name : " << university << endl;
    }
};
int main(){
    Derived obj;
    obj.name="Himel";
    obj.id=22111121;
    obj.age=21;
    obj.university="BSFMSTU";

    obj.print();
    return 0;
}
//Himel Sarder
//Dept. Of CSE, BSFMSTU
