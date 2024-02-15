#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf(" please enter a number ");
    scanf("%d",&num);

    printf(" the fibonacci for this number : %d",fibonacci(num));
    return 0;
}

int fibonacci (int a)
{
    if (a<=1)
    {
        return a;
    }
    else
    {
      return (fibonacci(a-1)+fibonacci(a-2));
    }
}
