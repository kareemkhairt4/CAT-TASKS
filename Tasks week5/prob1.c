#include <stdio.h>

  int main(void) 
  {
  int i=10;
  printf("tha value of i is %d\n",i);
  int *p;
    p=&i;
    *p=20;
    printf("tha value of i is %d\n",i);
   return 0;
  }