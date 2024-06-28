#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[200];
	while(1)
  { 
	int length=0 ;
	printf("Enter a string: ");
	gets(str1);
	
	while(str1[length++] != '\0');
	
	length--;
	char str2[length];
	
	for(int i = 0; i < length;i++)
	{
		str2[i]=str1[i];
	}
	printf("the copied string: %s\n",str2);

  }

    return 0;
}
