#include <stdio.h>
#include <stdlib.h>

int main()
{
   double num;
   int power;
   double result=1.0;
   printf("Enter the number : ");
   scanf("%lf",&num);

   printf("Enter a power : ");
   scanf("%d",&power);

   for(int i=0;i<power;i++)
   {
       result*=num;
   }

   printf("Answer = %.2lf",result);
    return 0;
}
