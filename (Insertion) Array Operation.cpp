#include <iostream>
using namespace std;

void insertElement(int arr[], int& n, int pos, int value) {
    // Check if the array is full
    if (n >= 100) {
        cout << "Array is full. Cannot insert element." << endl;
        return;
    }
    
    // Shift elements to make space for the new element
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the new element at the specified position
    arr[pos] = value;
    
    // Increment the size of the array
    n++;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5; // Current size of the array

    // Inserting element 10 at position 2
    insertElement(arr, size, 2, 10);

    // Print the array after insertion
    cout << "Array after insertion:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
