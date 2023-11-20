#include<bits/stdc++.h>

using namespace std;

class PrintN{
    private:
    static int count;

    public:
    static void print(){
        cout << count << " 1" << endl;
        count++;
    }
};

int PrintN::count = 1;

int main(){
    for(int i = 0; i < 3; i++){
        PrintN::print();
    }
}