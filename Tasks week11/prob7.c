#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,EVENCOUNT,ODDCOUNT;

    printf("Enter size of array :");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements in array: ",n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            EVENCOUNT++;
        else
            ODDCOUNT++;
    }

    printf("Total even elements: %d\n",EVENCOUNT);
    printf("Total odd elements: %d\n",ODDCOUNT);


    return 0;
}
