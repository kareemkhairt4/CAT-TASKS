#include <stdio.h>

void Repeating_Elements(int arr[], int n) {
    printf("Repeating elements in the array are: ");
    int num = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                num = 1;
                printf("%d ", arr[i]);
                break;  
            }
        }
    }

    if (num==0)
    {
        printf("No repeating element found in the given array.\n");
    } 
}

int main() {
    int n;

    printf(" enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf(" enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   Repeating_Elements(arr, n);

    return 0;
}
