#include <stdio.h>

 struct employees {
 char *name;
 float salary;
 float bonus;
 float deduction;
 };
   int main(void)
{
   struct employees emp[3];
   emp[0].name ="Mohsen";
   emp[1].name ="Maged";
   emp[2].name ="Mariam";
  
  for(int i=0;i<3;i++)
    {
      printf("Enter the information of the employee %s\n",emp[i].name);
      
      scanf("%f",&emp[i].salary);
     
      scanf("%f",&emp[i].bonus);

      scanf("%f",&emp[i].deduction);

      printf("\n");
    }
  for(int i=0;i<3;i++)
    {
      printf("The information of the employee %s\n",emp[i].name);
      printf("Salary: %f\n",emp[i].salary);
      printf("Bonus: %f\n",emp[i].bonus);
      printf("Deduction: %f\n",emp[i].deduction); 
      printf("\n");
    }
     return 0;
 }