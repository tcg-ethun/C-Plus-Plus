#include<stdio.h>
#include<string.h>

   struct student {
          int roll;
      float cgp;
      char name[100];
   };


int main()
{
   struct student op1;
   op1.roll = 20;
   op1.cgp = 5.0;
   strcpy(op1.name,"Ethun");

   printf("Name is : %s \n",op1.name);
   printf("Roll is : %d \n",op1.roll);
   printf("Cgpa is : %.1f \n \n",op1.cgp);
     return 0;
}