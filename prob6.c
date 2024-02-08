#include <stdio.h>

int main(void) {
  int ans;
  while(1)
  {
  printf(" please enter the answer of 3*4 :");
  scanf("%d",&ans);

  if (ans ==12)
  {
      printf(" Thanks");
      break;
  }
  else
  {
      printf(" try again");
  }
  }
  return 0;
}