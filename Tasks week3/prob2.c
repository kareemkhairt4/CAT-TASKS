#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    printf(" please enter two numbers ");
    scanf("%d%d",&x ,&y);
    printf(" the maximum of them numbers is %d",Get_Max (x,y));

    return 0;
}
int Get_Max (int a,int b)
{
  if (a>b)
    return a;
  else
    return b;
}
