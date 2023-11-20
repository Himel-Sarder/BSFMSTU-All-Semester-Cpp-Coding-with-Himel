#include<bits/stdc++.h>

using namespace std;
class ADD{
    public:
        void Sum(int x, int y){
            cout << x + y << endl;
        }
        void Sum(float x){
            cout << x << endl;
        }
        void Sum(int x, int y, int z){
            cout << x + y + z << endl;
        }
};
int main(){
    ADD obj;
    obj.Sum(10, 20);
    obj.Sum(20.3);
    obj.Sum(30,40,10);
}

//Same Function But Different Argument