#include <stdio.h>
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int s = 0; int e = sizeof(arr)/ sizeof(arr[0])-1;
    int target = 6;
    while(s <= e){
        int mid = (s+e)/2;
        if (arr[mid] == target){
            printf("Element found at %d", mid);
            return mid;
        }
        else if (arr[mid] < target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        }return -1;
    }
