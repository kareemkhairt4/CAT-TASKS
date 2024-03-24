#include <stdio.h>

 char subjects[4][20] = {"Programming", "Data Structures", "Discrete Math", "Algebra"};

 struct students {
 int ID;
 float Grade;
 };
   int main(void)
{
   struct students stu[10];
   stu[0].ID=0000; stu[1].ID=1111; stu[2].ID=2222; stu[3].ID=3333;
   stu[4].ID=4444; stu[5].ID=5555; stu[6].ID=6666; stu[7].ID=7777;
   stu[8].ID=8888; stu[9].ID=9999;

   stu[0].Grade=90.5; stu[1].Grade=80.5; stu[2].Grade=70.5;
   stu[3].Grade=60.5; stu[4].Grade=50.5; stu[5].Grade=40.5;
   stu[6].Grade=30.5; stu[7].Grade=20.5; stu[8].Grade=10.5;
   stu[9].Grade=0.5;
  
  int num=0;
  
   printf("if you are an admin and you want to change grades\n please enter 1\n if you are a student and you want to check your grade\n please enter 2\n");
   scanf(" %d",&num);
   if(num==1)
   {
     for(int i=0;i<10;i++)
       {
         float n;
         printf("change for student %d\n",i+1);
         scanf("%f",&n);
         stu[i].Grade=n;
         
       }
   }

   else if(num==2)
   {
     int checker=0;     //chech the number of wrongs

     do{ 
       int ID;
       printf(" please enter your ID\n");
       scanf(" %d",&ID);

       for(int i=0;i<10;i++)
         {
           if(stu[i].ID==ID)
           {
             printf("your grade is %f\n",stu[i].Grade);
             return 0;
           }
         }

       printf("wrong ID\n"); // it will print wrong ID if the ID is wrong
       printf("\n");
        checker++;
       
       }while(checker<3);

       printf("\n");
     
       printf("you have entered wrong ID 3 times\n please try again later\n"); // it will print this if the ID is wrong 3 times
     
     }
      else
   {
     printf("wrong number\n"); // it will print wrong number if the number isnot 1 or 2 
   }
     return 0;
 }