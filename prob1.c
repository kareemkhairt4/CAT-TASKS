#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NOH;
    int salary;

    printf(" please enter the working hours ");
    scanf(" %d", &NOH );

    if ( NOH < 40)
    {
     salary = (NOH * 50) * 0.9;
     printf(" Your salary is %d",salary);
    }
     else
    {
     salary = NOH * 50;
     printf(" Your salary is %d",salary);
    }
    return 0;
}