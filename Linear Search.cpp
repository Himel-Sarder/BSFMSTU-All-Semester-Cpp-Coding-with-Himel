#include <iostream>
#include <vector>
using namespace std;

// Function to perform linear search
int linearSearch(vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            return i; // Return the index if key is found
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    vector<int> arr = {12, 45, 78, 34, 56, 90};
    int key = 34;
    int index = linearSearch(arr, key);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}
