#include <stdio.h>

// Function to perform binary search iteratively
int biSearchIterative(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
                 }

        if (arr[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }


    return -1;
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

    result = biSearchIterative(arr, n, target);

    if (result != -1) {
        printf("Target found at index %d\n", result);
    } else {
        printf("Target not found in the array\n");
    }

    return 0;
}
