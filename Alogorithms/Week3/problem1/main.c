#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right)
 {
    int nl =mid-left+1; //elements in the left side
    int nr =right-mid;  //elements in the right side

    int L[nl],R[nr];

    for (int i=0;i<nl;i++)
        L[i] =arr[left+i];

    for (int j=0;j<nr;j++)
        R[j] =arr[mid+1+j];

    int i =0, j =0,k=left;

    while (i<nl && j<nr)  // بتاعه المقارنه بين اليمين والشمال
    {
        if (L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
       else
        {
            arr[k]=R[j];
            j++;
        }
        k+=1;
    }

    while (i<nl)
    {
        arr[k]=L[i];
        i+=1;
        k++;
    }

    while (j<nr)
    {
        arr[k]=R[j];
        j+=1;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
 {
    if (left>=right)
        return;        //or if (n/2) return;

    int mid =left+(right-left)/ 2 ;

    mergeSort(arr,left,mid);
    mergeSort(arr, mid + 1, right);

    merge(arr,left,mid,right);
}

int main()
{
     int arr[]={32,5,434,24,244,467,5,0,1};
    int size =sizeof(arr)/sizeof(arr[0]);

    printf("array before sorting : ");
    for (int i =0;i<size; i++)
        printf("%d ",arr[i]);

    printf("\n");
    printf("\n");

    mergeSort(arr,0,size-1);

    printf("array after sorting  : ");
    for (int i =0;i<size; i++)
        printf("%d ",arr[i]);
         printf("\n");

    return 0;
}
