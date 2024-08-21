#include <stdio.h>
#include <stdlib.h>

int main()
{
     int arr[100];
     int n , pos_del;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Inut array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Input position to Delete : ");
    scanf("%d",&pos_del);
    printf("\n");

    if(pos_del <1 || pos_del >n)
    {
        printf(" position to delete is out the range");
    }
    else
    {
        for(int i= pos_del-1; i<n-1;i++) //position is higher than index by 1 so i decreased one
        {
            arr[i] =arr[i+1]; // كاني اسكبيت العنصر اللي عاوز احذفه
        }
        //n--; // علشان يبقي العدد نقص واحد or put n-1 in the next loop

        printf("Array Elements : ");

        for(int i =0;i<n-1;i++)
        {
            printf("%d ", arr[i]);
        }

    }

    printf("\n");

    return 0;
}
