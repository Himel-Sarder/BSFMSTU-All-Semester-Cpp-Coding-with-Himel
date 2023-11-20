#include<bits/stdc++.h>

using namespace std;

int main(){
int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }

        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "* ";
        }

        cout << "\n";
    }
}
//Himel Sarder
//Dept. of CSE, BSFMSTU
