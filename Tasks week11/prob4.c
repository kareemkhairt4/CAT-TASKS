#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,result,reminder;
    printf("Enter any number to find its digit: ");
    scanf("%d",&num);

    while(num !=0)
    {
        reminder=num%10;
        result+=reminder;

        num=num/10;
    }

    printf("Sum of digits = %d",result);
    return 0;
}
