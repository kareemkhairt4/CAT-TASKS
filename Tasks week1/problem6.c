#include <stdio.h>

int main(void) {
 int x,y ;
  printf (" please enter 2 numbers\n");
  scanf ("%d%d",&x,&y);
  printf (" the arithmetical operators\n");
  printf (" ( %d +  %d  ) = %d\n",x,y,x+y);
  printf (" ( %d -  %d  ) = %d\n",x,y,x-y);
  printf (" ( %d *  %d  ) = %d\n",x,y,x*y);
  printf (" ( %d /  %d  ) = %d\n",x,y,x/y);
  printf (" ( %d %% %d  ) = %d\n",x,y,x%y);
  
  printf (" the logical operators\n");
  printf (" ( %d &&  %d  ) = %d\n",x,y,x&&y);
  printf (" ( %d ||  %d  ) = %d\n",x,y,x||y);
  printf (" ( !x ,  !y  ) = %d ,%d\n",!x,!y);
  
  printf(" the bitwise operators\n");
  printf (" ( %d ^  %d  ) = %d\n",x,y,x^y);
  printf (" ( %d << %d  ) = %d\n",x,y,x<<y);
  printf (" ( %d >> %d  ) = %d\n",x,y,x>>y);
  printf (" ( %d &  %d  ) = %d\n",x,y,x&y);
  printf (" ( %d |  %d  ) = %d\n",x,y,x|y);
  printf (" ( !x ,  !y  ) = %d ,%d",!x,!y);
  return 0;
}