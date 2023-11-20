//1*2+2*3+3*4..............+n*(n+1)
#include<bits/stdc++.h>

using namespace std;

int series(int x) {
    if (x == 0) return 0;
    else return x * (x + 1) + series(x - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = series(num);
    cout << "Sum of the series is: " << sum << endl;
    return 0;
}
