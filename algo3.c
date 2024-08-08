#include <stdio.h>

#define MAX_SIZE 100

void inputArray(int arr[], int size) {

    for (int i = 0; i < size; i++) {

        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i;
    for (i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }
    for (int j = 0; j < size2; j++) {
        result[i + j] = arr2[j];
    }
}

int main() {
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int arr1[size1];

    printf("\nEnter elements of the first array:\n");
    inputArray(arr1, size1);

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr2[size2];

    printf("\nEnter elements for the second array:\n");
    inputArray(arr2, size2);

    int result[size1 + size2];
    mergeArrays(arr1, size1, arr2, size2, result);

    printf("Merged array:\n");
    printArray(result, size1 + size2);

    return 0;
}
