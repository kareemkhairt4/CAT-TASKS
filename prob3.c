#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    printf(" please enter your ID ");
    scanf("%d",&id);

    switch (id)
    {
        case 1234 :
        printf(" Harry ");
        break;
        case 5678 :
        printf(" Ron ");
        break;
        case 1145 :
        printf(" Hermione ");
        break;
        default:
        printf(" Wrong ID ");
        break;
    }
    return 0;
}