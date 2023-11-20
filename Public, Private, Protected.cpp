#include <iostream>

using namespace std;

class MyClass {
    private:
    int privateVar;

    protected:
    int protectedVar;

    public:
    int publicVar;
    void printPublic(){
        cout << "Public " << publicVar << endl;
    }

    MyClass(int privateValue, int protectedValue): privateVar(privateValue),protectedVar(protectedValue){}
    void printPrivate(){
        cout << "Private " << privateVar << endl;
    }
    
    void printProtected(){
        cout << "Protected " << protectedVar << endl;
    }
};

int main(){
    MyClass obj(30, 60);

    obj.publicVar = 90;
    obj.printPublic();

    obj.printPrivate();

    obj.printProtected();

}
