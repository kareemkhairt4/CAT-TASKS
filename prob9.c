#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int fact=1;
    printf(" please enter a number ");
    scanf("%d",&num);

    while(num!=0)
    {
     fact=fact*num;
     num--;
    }
    printf(" the factorial is %d",fact);
    return 0;
}