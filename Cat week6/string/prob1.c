#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a[30],*s;
  printf(" please enter a string ");

  int ch,i=0;
   while((ch=getchar())!='\n')
     {
       a[i++]=ch;
     }

  s=a;

   while(*s!='\0')
     {
       if (*s<='z'&&*s>='a')
         *s=*s-32;
       // 32=97-65 difference between small and capital letters
          s++;
     }
   printf(" the string in upper case is %s",a);

     return 0;
 }
