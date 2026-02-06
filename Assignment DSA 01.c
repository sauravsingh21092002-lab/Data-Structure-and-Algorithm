#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d element: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int expSum = (n + 1) * (n + 2) / 2;
    int actSum = 0;
    for (int i = 0; i < n; i++) {
        actSum += arr[i];
    }

    int missing = expSum - actSum;
    printf("Missing number is: %d\n", missing);

    return 0;
}