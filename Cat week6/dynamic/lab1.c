#include <stdio.h>

 int main(void) {
   int n ;
   printf("enter the number of subjects you want to add marks : ");
   scanf("%d",&n);
   
   int* arr=(int*)malloc(n*sizeof(int));
   
   printf("enter the marks of %d subjects : ",n);
   for (int i = 0; i < n;i++)
   {
      printf("sub[%d]= ",i+1);
      scanf("%d",&arr[i]);
   }
   int check = 0 ;
   do
   {

    printf("if you want to add new subject enter 1 for adding or 0 for exiting : ");
    scanf("%d",&check);
    if(check)
    {
     int num=0;
      printf("enter the number of subject you need to add : ");
      scanf("%d",&num);

      arr = (int *)realloc(arr,(n+num)*sizeof(int));

      printf("enter the marks of %d subjects : \n",num);
   for (int i = n; i < n+num; i++)
   {
      printf("sub[%d]= ",i+1);
      scanf("%d",&arr[i]);
   }
     n=n+num;
    }
   } while (check);

   printf("the marks of subject : \n");
   for (int i = 0; i < n; i++)
   {
     printf("sub[%d]= %d ",i+1,arr[i]);
   }
   free(arr);
     return 0;
 }