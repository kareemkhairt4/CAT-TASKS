#include <stdio.h>
#include <stdlib.h>

 void Quicksort (int *a,int start,int end )
 {
   if(start<end)
   {
      int pindex =partition(a,start,end);
      Quicksort(a,start,pindex-1);
      Quicksort(a,pindex+1,end);
   }

 }

 int partition (int *a,int start,int end )
 {
   int pivot =a[end];
   int pindex=start ;
   for (int i=start;i<end;i++)
   {
       if(a[i]<=pivot)
       {
           int temp =a[i];
           a[i]=a[pindex];
           a[pindex]=temp;
           pindex++;
       }
   }
    int temp =a[pindex];
        a[pindex]=a[end];
        a[end]=temp;

        return pindex ;
 }



int main()
{
    int arr[]={32,5,434,24,244,467,5,0,1};

     int size =sizeof(arr)/sizeof(arr[0]);
    int END = size-1 ;
    Quicksort(arr,0,END);

    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    return 0;
}
