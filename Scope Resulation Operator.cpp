/*Scope resulation operator(::) in C++ Language is used to define
a function outside a class or when we want to use a global variable
but also has a local variable with the same name....*/

//Example :

#include <bits/stdc++.h>
using namespace std;

//global variable
string channel = "Himel is global";
int main(){
    //local variable
    string channel = "Himel is local";

    cout << "Local variable : " << channel << endl;
    cout << "Global variable : " << ::channel << endl;

    return 0;
}

//Himel Sarder
//Dept. Of CSE, BSFMSTU
