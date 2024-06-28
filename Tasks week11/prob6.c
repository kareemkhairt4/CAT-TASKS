#include <stdio.h>
#include <stdlib.h>

double MAX (double a,double b,double c,double d);
double MIN (double a,double b,double c,double d);

int main()
{
 double a,b,c,d,max,min;
 printf("Enter four numbers :");
 scanf("%lf %lf %lf %lf",&a ,&b ,&c ,&d);

 max=MAX(a,b,c,d);
 min=MIN(a,b,c,d);

 printf("The Max number is : %lf\n",max);
 printf("The Min number is : %lf\n",min);


    return 0;
}

 double MAX (double a,double b,double c,double d)
 {
     double max=a;
     if(b>max)
        max=b;
     if(c>max)
        max=c;
     if(d>max)
        max=d;

    return max;
 }

 double MIN (double a,double b,double c,double d)
 {
     double min=a;
     if(b<min)
        min=b;
     if(c<min)
        min=c;
     if(d<min)
        min=d;

    return min;
 }
