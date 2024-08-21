#include <stdio.h>
#include <stdlib.h>


int binarysearch(int arr[],int low,int high,int x) 
{                                                  
  while (low <= high)
  {
    int mid= low+(high-low)/2; //or mid = (low+high)/2 but what i use is better

    if (arr[mid] ==x)
         return mid;

    if (arr[mid] <x)
         low = mid+1;

    else
         high = mid-1;
  }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    int check=binarysearch(arr,0,n-1,7);

    if (check !=-1)
        printf("Element at index %d\n",check);
    else
        printf("Element is not founded in array\n");
    return 0;
}
