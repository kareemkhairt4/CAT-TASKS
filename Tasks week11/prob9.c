#include <stdio.h>
#include <stdlib.h>

void MIN_MAX (int arr[],int n,int *min,int *max);

int main()
 {
    int n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements in array:\n",n);
    for (int i=0;i<n;i++)
        {
        scanf("%d", &arr[i]);
        }

        int min,max;

    MIN_MAX(arr,n,&min,&max);

    printf("Minimum value: %d\n",min);
    printf("Maximum value: %d\n",max);

    return 0;
}

void MIN_MAX(int arr[],int n,int *min,int *max)
 {
    *min = arr[0];
    *max = arr[0];

    for (int i=0;i<n;i++)
    {
        if (arr[i] < *min)
            {
            *min = arr[i];
            }

        if (arr[i] > *max)
            {
            *max = arr[i];
            }
    }
}
