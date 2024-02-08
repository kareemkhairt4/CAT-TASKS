#include <stdio.h>

int main(void) {
  int ID,PS,i,not=0 ;
    int CID=7822;
    int CPS=387653;
    printf(" please enter your ID ");
    scanf("%d",&ID);

    if (ID==CID)
    {
    for (i=1;i<=3;i++)
    {
         not++;
         printf(" please enter your password ");
         scanf("%d",&PS);

         if(PS==CPS)
         {
            printf(" WELCOME ");
            break;
         }
         else
         {

            printf(" You are not registerd \n");
         }
         if (not==3)
         {
        printf("\n");
     printf(" No more tries");
         }
     }
     }

     else if(ID!=CID)
     {
         printf(" The ID is wrong ");
     }
  return 0;
  
}