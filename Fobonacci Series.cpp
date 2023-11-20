#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n; 

    int First = 0;
    int Second = 1;
    for(int i = 1; i <= n; i++){
        cout << First << " ";
        int fact = First + Second;
        First = Second;
        Second = fact;
    }
    cout << endl;
}