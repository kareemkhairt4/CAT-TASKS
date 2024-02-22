#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void ascend_arr(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_num = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_num])
                min_num = j;
        }

        swap(&arr[min_num], &arr[i]);
    }
}

void descend_arr(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_num = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_num])
                max_num = j;
        }

        swap(&arr[max_num], &arr[i]);
    }
}

int main() {
    int size, number;

    printf("Please enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Please enter the elements: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Please enter 0 for ascending array or 1 for descending array: ");
    scanf("%d", &number);

    if (number == 0) {
        ascend_arr(arr, size);
        printf("The array in ascending order: ");
    } else if (number == 1) {
        descend_arr(arr, size);
        printf("The array in descending order: ");
    } else {
        printf("Invalid choice. Please enter 0 or 1 to sort the array.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
