/*
A Friend function is function declared with the friend keyword and 
isn't a member function, has its own object...
*/

#include<bits/stdc++.h>

using namespace std;

class base{
    private:
    string name = "HIMEL SARDER";
    friend void print(base &printBase);
    public:
    // Getter function to access the private member
    string getName() const {
        return name;
    }
};

void print(base &printBase){
    cout << "My name is : " << printBase.getName() << endl;
}

int main(){
    base obj;
    print(obj);
    return 0;
}

//Himel Sarder
//Dept. Of CSE, BSFMSTU
