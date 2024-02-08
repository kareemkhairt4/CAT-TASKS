#include <stdio.h>

int main(void) {
  int height;
  printf(" enter the height of the pyramid: ");
  scanf("%d", &height);

  for (int i = 1; i <= height; i++) {
      for (int k = 1; k <= height - i; k++)
          printf(" ");

      for (int j = 1; j <= 2 * i - 1; j++)
          printf("*");

      printf("\n");
  }
  return 0;
  
}