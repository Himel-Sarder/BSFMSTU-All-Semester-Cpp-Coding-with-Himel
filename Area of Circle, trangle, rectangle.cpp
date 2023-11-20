#include<bits/stdc++.h>

using namespace std;

class rectangle{
    //private:
    //int weight;
    //int height;

    public:
    int weight;
    int height;
    //void setvalue(int x, int y){
    //    weight = x;
    //    height = y;
    //}
    rectangle(int w, int h):weight(w),height(h)
    {}
    void area(){
        cout << "Area : " << height * weight << endl;
    }
};

int main(){
    rectangle obj(20,30);
    //obj.setvalue(20,30);
    obj.area();
}