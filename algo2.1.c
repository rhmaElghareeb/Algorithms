#include <stdio.h>

// Function to perform binary search recursively
int biSearchRecursive(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;
    }
    if (arr[mid] > target) {
        return biSearchRecursive(arr, left, mid - 1, target);
    }

    return biSearchRecursive(arr, mid + 1, right, target);
}

int main() {
    int arr[100];
    int i , n;
    int target ,result;
    printf ("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter array:\n");
    for(i=0;i<n;i++){

        scanf("%d",&arr[i]);
    }
    printf ("Enter the target: \n");
    scanf("%d",&target);

    result = biSearchRecursive(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Target found at index %d\n", result);
    } else {
        printf("Target not found in the array\n");
    }

    return 0;
}
