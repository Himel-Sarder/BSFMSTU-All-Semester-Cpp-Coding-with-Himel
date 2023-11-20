#include<iostream>

using namespace std;

// Function to generate Fibonacci series
void Fibonacci(int n) {
    int first = 0, second = 1;

    cout << "Fibonacci Series up to " << n << " terms: ";
    
    for (int i = 1; i <= n; ++i) {
        cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;

    Fibonacci(n);

    return 0;
}







/*

#include<iostream>

using namespace std;

void Fibonacci(int n) {
    int fibArray[n];
    fibArray[0] = 0;
    fibArray[1] = 1;

    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 2; i < n; ++i) {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }

    for (int i = 0; i < n; ++i) {
        cout << fibArray[i] << " ";
    }

    cout << endl;
}

int main() {
    int num;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> num;

    Fibonacci(num);

    return 0;
}
*/