#include <stdio.h>
#include <stdlib.h>

int main()
 {
   long long num;
   int bit;

   printf("Enter any number :");
   scanf("%lld",&num);

   printf("Enter nth bit to check (0-31): ");
   scanf("%d",&bit);

   if (num & (1 << bit))
      {
        printf("The %d bit is set to 1\n",bit);
      }
   else
      {
        printf("The %d bit is set to 0\n",bit);
      }

    return 0;
}
