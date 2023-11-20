#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, y, z;
    cout << "Enter three number: ";
    cin >> x >> y >> z;
    int max_num = max(x, max(y, z));
    cout << "Largest number is : " << max_num << endl;
}