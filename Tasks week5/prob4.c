#include <stdio.h>

 void swap(int *a,int *b);
 void bubble(int *a,int size);
 void print_bubble(int *a,int size);

 int main(void) {
     int a[] = {23,2,42,423,54,3,45,7,24,42};
     int size = sizeof(a)/sizeof(a[0]);
     bubble(a, size);
     print_bubble(a, size);
     return 0;
 }

 void swap(int *a, int *b) {
     int temp = *a;
     *a = *b;
     *b = temp;
 }

 void bubble(int *a, int size) {
     for (int i = 0; i < size -1;i++) {
         for (int j=0; j <size-i-1;j++) {
             if (*(a+j) > *(a+j+1))
                 swap((a+j),(a+j+1));
         }
     }
 }

 void print_bubble(int *a, int size) {
     for (int i = 0; i <size;i++) {
         printf("%d ",*(a + i));
     }
 }