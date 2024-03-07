#include <stdio.h>

 int main(void) {
   char a[100],*s;
   
   int alphabetsCount = 0, digitsCount = 0, specialCharsCount = 0;

   printf(" enter a string: ");
   int ch,i=0;
    while((ch=getchar())!='\n')
      {
        a[i++]=ch;
      }

   s=a;

   for (int i = 0; a[i] != '\0'; ++i) {
       if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
       {
           alphabetsCount++;
       } 
       else if (a[i] >= '0' && a[i] <= '9')
       {
           digitsCount++;
       } 
       else if (a[i] != ' ' || a[i] != '$' || a[i] != '#' || a[i] != '@')
       {
           specialCharsCount++;
       }
   }

   printf("Number of Alphabets: %d\n", alphabetsCount);
   printf("Number of Digits: %d\n", digitsCount);
   printf("Number of Special characters: %d\n", specialCharsCount);
      
     return 0;
 }