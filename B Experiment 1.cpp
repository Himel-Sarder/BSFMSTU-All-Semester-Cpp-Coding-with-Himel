#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "Enter the number o element of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    /*
    int max_element = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max_element){
            max_element = arr[i];
        }
    }
    */
    int *max = max_element(arr, arr + n);

    cout << "Max element of array is " << *max << endl;
}