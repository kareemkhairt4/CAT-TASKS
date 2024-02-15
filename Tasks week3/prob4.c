#include <stdio.h>
#include <stdlib.h>

int main()
{
    char N[40];
  char P[40];

   printf(" please enter your username ");
    scanf("%s",N);
   printf(" please enter your password ");
    scanf("%s",P);

    logain(N,P);

    return 0;
}
void logain (char user[] ,char pass[])
{
  char correctuser[] ="kareemuser";
  char correctpass[] ="kareempass";

  if( strcmp(user, correctuser)==0 && strcmp(pass, correctpass)==0 )
    printf(" Successful Logain");

  else
    printf(" Wrong Logain ");
}
