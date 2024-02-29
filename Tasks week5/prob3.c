 #include <stdio.h>

  int main(void) 
  {
    
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int b[]={1,2,3,4,5,6,7,8,9,10};

  
      printf(" %d",mul(&a,&b));
      
    
   return 0;
  }
  int mul (int *a,int *b)
  {
    int scl=0;
    for(int i=0;i<10;i++)
      {
        scl+=a[i]*b[i];
      }
    return scl;;
  }