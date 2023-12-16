#include<bits/stdc++.h>
using namespace std;

class Base{
    int value;
    public:
    Base(int v = 0){
        value = v;
    }
    int getValue() const {
        return value;
    }
};
int main(){
    Base obj(100);
    cout << obj.getValue() << endl;
}
