#include <stdio.h>
#include <stdlib.h>

int main()
{
     char a[100],*s;

   printf(" enter a string: ");
   int ch,i=0;
    while((ch=getchar())!='\n')
      {
        a[i++]=ch;
      }
   s=a;
   int length=strlen(a);

   char ra[length+1];
   //+1 for null character
   ra[length]='\0';

   for (int i = length-1; i>=0; i--)
     {
       ra[length-i-1]=a[i];
     }
     printf(" The reversing string is: %s",ra);
    return 0;
}
