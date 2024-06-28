#include <stdio.h>
#include <stdlib.h>
int Binary_To_Decimal(long long num);

int main()
 {
   long long num;

   printf("Enter a Binary number :");
   scanf("%lld",&num);

   int res=Binary_To_Decimal(num);

   printf("%lld in binary = %d in decimal ",num,res);


    return 0;
}


int Binary_To_Decimal(long long num)
{
    int dec_Num = 0, power = 1, remainder;

    while (num != 0)
        {
        remainder=num%10;
        num/=10;
        dec_Num+=remainder*power;
        power*=2;
        }

    return dec_Num;
}
