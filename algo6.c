#include <stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100


void deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Error: Invalid position.\n");
        return;
    }

    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    if (size > MAX_SIZE || size <= 0) {
        printf("Error: Size should be between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to delete (0 to %d): ", size - 1);
    scanf("%d", &position);

    printf("Array before deletion:\n");
    printArray(arr, size);

    deleteElement(arr, &size, position);

    printf("Array after deletion:\n");
    printArray(arr, size);

    return 0;
}
