#include <stdio.h>
#include <stdlib.h>

int main()
{
     char a[100],*s;
    char Char;
    int index =-1 ;


    printf(" enter a string: ");
  int ch,i=0;
    while((ch=getchar())!='\n')
      {
        a[i++]=ch;
      }
    s=a;

    printf(" enter a character :");
    scanf("%c",&Char);

    for (int i = 0; a[i] != '\0'; ++i)
        {
        if (a[i] == Char)
         {
            index = i;
            break;
        }
    }


    if (index != -1)
        {
        printf("'%c' is found at index %d\n",Char, index);
        }
    else
     {
        printf("'%c' not found in the string.\n",Char);
    }
    return 0;
}