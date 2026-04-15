#include <iostream>
using namespace std;

// Yeh function do sorted arrays (left aur right halves) ko merge karta hai
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Temporary arrays banate hain
    int L[n1], R[n2];

    // Data ko temp arrays mein copy karte hain
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Dono arrays ko compare karke original array mein sort karke dalte hain
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Agar L array mein kuch elements bach gaye hon
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Agar R array mein kuch elements bach gaye hon
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Main Merge Sort function jo array ko divide karta hai
void mergeSort(int arr[], int left, int right) {
    if (left >= right) {
        return; // Base case: Agar array mein 1 ya 0 elements hain
    }

    int mid = left + (right - left) / 2; // Mid-point find karte hain taaki overflow na ho

    // Left half ko sort karte hain
    mergeSort(arr, left, mid);

    // Right half ko sort karte hain
    mergeSort(arr, mid + 1, right);

    // Dono sorted halves ko merge karte hain
    merge(arr, left, mid, right);
}

// Array print karne ke liye helper function
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: \n";
    printArray(arr, arr_size);

    // Merge Sort call karte hain
    mergeSort(arr, 0, arr_size - 1);

    cout << "\nSorted array: \n";
    printArray(arr, arr_size);
    return 0;
}