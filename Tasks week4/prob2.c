#include <stdio.h>

int main(void) {
  int n;
  printf(" enter the number of elements in the array: ");
  scanf("%d", &n);

  int arr[n];
  printf (" enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
  }

  int first_largest = arr[0];
  int second_largest = arr[0];

  for (int i = 1; i < n; i++) {
      if (arr[i] > first_largest) {
          second_largest = first_largest;
          first_largest = arr[i];
      } else if (arr[i] > second_largest && arr[i] != first_largest) {
          second_largest = arr[i];
      }
  }

  printf("The second largest element is: %d ", second_largest);
  return 0;
}