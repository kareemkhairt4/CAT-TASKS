#include <stdio.h>

int main(void) {
  int num;
  int sum=0;
  
  for (int i=1;i<=10;i++)
  {
  printf(" please enter the number %d :" ,i);
  scanf("%d",&num);
  sum=sum+num;
  }
  
  printf("the summation is %d \n",sum);
  printf("the average is %d ",sum/10);
  return 0;
}