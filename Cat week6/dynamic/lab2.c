#include <stdio.h>

 int main(void) {
   int n;

   printf(" enter the size : ");
   scanf("%d",&n);

   int* arr=(int*)malloc(n*sizeof(int));

   printf(" enter the elements : ");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }

   int max=arr[0];
   int min=arr[0];

   for(int i=0;i<n;i++)
   {
       if(arr[i]>max)
       max=arr[i];

       if(arr[i]<min)
       min=arr[i];
   }
   printf(" max value is :%d\n",max);
   printf(" min value is :%d\n",min);

   free(arr);


     return 0;
 }