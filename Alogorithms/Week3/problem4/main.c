#include <stdio.h>
#include <stdlib.h>


 int Find_Max (int arr[] ,int n)
 {
    int low=0 ,high=n-1 ;

    if (low<high)
    {
        int mid =low + (high-low) /2 ;

        if(arr[mid]<arr[mid+1]) // لو اتحقق معني ذلك ان الماكس علي يمين الميد وبالتالي لازم احط مقارنتي علي الجزء اليمين فهخلي low=mid+1
        {
            low =mid+1 ;
        }
        else                    // هخلي المقارنه بقا ناحيه الشمال
        {
            high=mid ; // علشان ممكن الميد نفسه يكون هو الماكس
        }
    }

      return arr[low]; // or arr[low]
 }

int main()
{
    int arr[] ={4,5,8,9,10,11,7,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("The array Elements :");
    for (int i=0;i<size;i++)
    printf("%d ",arr[i]);
    printf("\n");
    printf("\n");

    printf("The Maximum Element is : %d\n",Find_Max(arr,size));

    return 0;
}
