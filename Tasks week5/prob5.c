#include <stdio.h>

 int main(void) {
   int x=5;
   int y=10;
   int z=12;
   int *px=&x;
   int *py=&y;
   int *pz=&z;
   printf("%d %d %d\n",x,y,z);
   printf("%p %p %p\n",px,py,pz);
   printf("%d %d %d\n",*px,*py,*pz);
       printf("\n"); 
   printf("Swapping Pointers\n");
   pz = px; px = py; py = pz;
       printf("\n");
   printf("%d %d %d\n",x,y,z);
   printf("%p %p %p\n",px,py,pz);
   printf("%d %d %d\n",*px,*py,*pz);
     
     return 0;
 }