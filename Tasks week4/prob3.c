#include <stdio.h>

int main(void) {
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
  }

  printf("unique elements in the array are: ");

  for (int i = 0; i < n; i++)
    {
      int unique = 1;
      for (int j = 0; j < i; j++)
        {
          if ( arr[i] == arr[j])
          {
              unique = 0;
              break;
          }
        }
    
      if (unique) {
          printf("%d ", arr[i]);
   }
  }

  printf("\n");
  return 0;
}