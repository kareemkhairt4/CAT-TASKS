#include <stdio.h>

int main(void) {
  int deg;
  printf(" please enter your degree ");
  scanf("%d",&deg);

  if (deg <=100 && deg >=85)
  {
    printf(" your rating is Excellent ");
  }
  else if (deg <85 && deg >=75)
  {
    printf(" your rating is very good ");
  }
   else if (deg <75 && deg >=65)
  {
    printf(" your rating is good ");
  }
   else if (deg <65 && deg >=50)
  {
    printf(" your rating is passed ");
  }
  else
  {
    printf(" your rating is failing ");
  }
  return 0;
}