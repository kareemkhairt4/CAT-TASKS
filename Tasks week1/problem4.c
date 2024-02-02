#include <stdio.h>

int main(void) {
  int x=7;
  int y=4;
  printf(" ( x | y  )  =  %d\n",x|y );
  printf(" ( x & y  )  =  %d\n",x&y );
  printf(" ( x ^ y  )  =  %d\n",x^y );
  printf(" ( x << 1 )  =  %d\n",x<<1);
  printf(" ( x >> 2 )  =  %d\n",x>>2);
  return 0;
}