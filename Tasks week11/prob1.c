#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num;
    int count0 = 0, count1 = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp != 0)
        {
        if (temp & 1)
        {
            count1++;
        }

        temp >>= 1;
    }

    printf("Total zero bit is %d\n",32-count1);
    printf("Total one bit is %d\n", count1);
    return 0;
}