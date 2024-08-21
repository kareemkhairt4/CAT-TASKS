#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1=5,s2=4,s3 ;
    s3=s1+s2 ;

   int arr1[s1] , arr2[s2] ,arr3[s3] ;

   printf("Input first array Elements:");
   for(int i=0;i<s1;i++)
   {
    scanf("%d",&arr1[i]);
    arr3[i]=arr1[i] ;
   }

   printf("Input second array Elements:");
   for(int j=0;j<s2;j++)
   {
    scanf("%d",&arr2[j]);
    arr3[j+s1] = arr2[j];
   }


    for(int i=0;i<s3-1;i++)
    {
        for(int j=i+1;j<s3;j++)
        {
            if(arr3[i]>arr3[j])
            {
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    printf("\n");

    printf("Merged array in ascending order: ");
     for(int i=0;i<s3;i++)
     {
         printf("%d ",arr3[i]);
         if(i==s3-1)
            continue;
         printf(",");
     }


    return 0;
}
