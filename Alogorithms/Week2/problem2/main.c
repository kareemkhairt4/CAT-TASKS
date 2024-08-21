#include <stdio.h>
#include <stdlib.h>

int binarysearch(int arr[],int low,int high,int x)
 {
    if (low > high)
         return -1;

    if (low <= high)
    {
        int mid =low+(high-low)/2;

        if (arr[mid] ==x)
            return mid;

        if (arr[mid] <x)
            return binarysearch(arr,mid+1,high,x);
        else
            return binarysearch(arr,low,mid-1,x);
    }

}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    int check=binarysearch(arr,0,n-1,4);

    if (check !=-1)
        printf("Element at index %d\n",check);
    else
        printf("Element is not founded in array\n");
    return 0;
}
