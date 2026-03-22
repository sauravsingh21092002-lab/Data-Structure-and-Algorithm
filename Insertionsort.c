#include <iostream>
using namespace std;

// Insertion Sort ka function
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Current element jisko sahi jagah par rakhna hai
        int j = i - 1;

        // Sorted part mein check karte hain, aur jo elements 'key' se bade hain,
        // unhe ek position aage (right side) shift kar dete hain
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        // 'key' ko uski sahi jagah par insert kar dete hain
        arr[j + 1] = key;
    }
}

// Array print karne ke liye helper function
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: \n";
    printArray(arr, n);

    // Insertion Sort call karte hain
    insertionSort(arr, n);

    cout << "\nSorted array: \n";
    printArray(arr, n);

    return 0;
}