#include<bits/stdc++.h>

using namespace std;
/*
inline int cube(int s){
    return s*s*s;
}
int main(){
    cout << "Cube of 3 is: " << cube(3) << endl;
}
*/
class Inline{
    public:
    int w, h;
    inline int print();
};
int Inline::print(){
    return w * h;
}

int main(){
    Inline obj;
    obj.w = 10;
    obj.h = 20;
    cout << obj.print() << endl;
}