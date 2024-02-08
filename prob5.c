#include <stdio.h>

int main(void) {
  int num1,num2,num3;
    printf(" please enter three numbers ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if ((num1>num2) && (num1>num3))
    {
        printf(" The maximum number is the first number %d ",num1);
    }
    else if ((num2>num1) && (num2>num3))
    {
        printf(" The maximum number is the second number %d ",num2);
    }
    else
    {
        printf(" The maximum number is the third number %d ",num3);
    }
  return 0;
}