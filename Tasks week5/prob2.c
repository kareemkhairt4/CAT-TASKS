 #include <stdio.h>

  int main(void) 
  {
  int i,j;
    printf(" please enter two values");
    scanf(" %d %d",&i,&j);
    printf(" the summation is :%d ", fun(&i,&j));
    
   return 0;
  }
  int fun (int *a,int *b)
  {
   return *a+*b; 
  }