#include<bits/stdc++.h>

using namespace std;
int series(int x){
    if(x <= 0) return 0;
    else return x*(x+1)*(x+2) + series(x - 1);
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int sum = series(n);
    cout << "SUM : " << sum << endl;
}