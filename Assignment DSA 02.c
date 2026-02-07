#include <stdio.h>

void reversePart(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void inplaceMerge(int arr[], int left, int mid, int right) {
    int i = mid + 1;
    while (i <= right) {
        int key = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        i++;
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter mountain array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peakIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[peakIndex]) {
            peakIndex = i;
        }
    }
    printf("Peak element is %d at index %d\n", arr[peakIndex], peakIndex);

    reversePart(arr, peakIndex + 1, n - 1);

    inplaceMerge(arr, 0, peakIndex, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}