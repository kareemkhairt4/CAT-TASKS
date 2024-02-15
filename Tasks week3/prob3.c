#include <stdio.h>
#include <stdlib.h>
int count=0;
int main()
{
    int num;
    printf(" please enter a number ");
    scanf("%d",&num);

    numofdigits(num);

    printf(" The number of digits is %d ",count);
    return 0;
}

   void numofdigits (int a)
 {

 while( a!=0)
    {
        count++;
        a/=10;
    }
 }


