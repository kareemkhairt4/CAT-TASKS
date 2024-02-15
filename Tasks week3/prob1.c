#include <stdio.h>
#include <stdlib.h>

int num1=10;
int num2=20;

int main()
{
    swap(&num1,&num2);
    printf(" the first number is %d\n the second number is %d ",num1,num2);
    return 0;
}

int swap (int *a,int *b)
{
   int c;
   c=*a;
   *a=*b;
   *b=c;
}
