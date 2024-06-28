#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
        printf("LEAP YEAR\n", year);
        }
    else
        {
        printf("NOT LEAP YEAR\n", year);
        }

    return 0;
}
