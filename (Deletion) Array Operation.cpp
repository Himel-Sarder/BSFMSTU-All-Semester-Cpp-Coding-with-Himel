#include <iostream>
using namespace std;

void deleteElement(int arr[], int& n, int pos) {
    // Shift elements to fill the gap left by the deleted element
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Decrement the size of the array
    n--;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5; // Current size of the array

    // Deleting element at position 2
    deleteElement(arr, size, 2);

    // Print the array after deletion
    cout << "Array after deletion:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
