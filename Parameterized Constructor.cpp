//A constructor which has parameter list and arguments can be passed through the function call is called parameterized Constructor...


#include<bits/stdc++.h>

using namespace std;

class SUM{
    protected:
    int a;
    int b;
    public:
    //SUM(int r,int s):a(r),b(s){}
    SUM(int x,int y){
        a = x;
        b = y;
    }
    void print(){
        cout << a + b << endl;
    }

};

int main(){
    SUM obj(20,50);
    obj.print();
    return 0;
}
/*
-------------------------
| Himel Sarder          |
| Dept. Of CSE, BSFMSTU |
|------------------------
*/
