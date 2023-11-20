#include<bits/stdc++.h>

using namespace std;

int fact(int x){
    if(x == 0 || x == 1) return 1;
    else return x * fact(x-1);
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = fact(num);
    cout << "Factorial of " << num << " is: " << result << endl;
}