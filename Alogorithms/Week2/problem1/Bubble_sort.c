#include <stdio.h>
#include <stdlib.h>


void BubbleSort(int arr[],int n)
{
 int i,j,temp;
 int flag; // I add the flag to decrease time complexity
 for (i =0;i< n-1;i++)
  {
    flag =0;
    for (j =0;j < n-i-1;j++)
        {
          if (arr[j] > arr[j+1]) // هشوف كل رقمين لو لقيت الرقم اللي علي الشمال اكبر من الرقم اللي علي اليمين
            {                    //                    ساعتها هبدلهم علشان اخلي الصغير دايما علي الشمال وهكذا
              temp    = arr[j];
              arr[j]  = arr[j+1]; //to swap
              arr[j+1]= temp;
              flag    = 1;
            }
        }

    if (flag ==0)
     break;
  }
}

int main()
{
    int arr[]={4,6,3,2,8,5,1,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr,n);

     for (int i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
     }

    return 0;
}
