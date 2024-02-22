#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sum=0;
  int arr[5][5];

  for (int i=0;i<5;i++)
    {
      printf(" Enter Row %d: ",i+1);
      for (int j=0;j<5;j++)
        {
          scanf("%d",&arr[i][j]);
        }
    }

  printf(" Row Totals : ");
  for (int i=0;i<5;i++)
  {
    for (int j=0;j<5;j++)
      {
        sum=sum+arr[i][j];
      }
    printf("%d ",sum);
    sum=0;
  }
  printf("\n");

  printf(" Columns Totals : ");

  for (int j=0;j<5;j++)
  {
    for (int i=0;i<5;i++)
      {
        sum=sum+arr[i][j];
      }
    printf("%d ",sum);
    sum=0;
  }
   printf("\n");
    return 0;
}
