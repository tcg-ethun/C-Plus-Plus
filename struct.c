#include<stdio.h>
#include<string.h>

   struct student {
          int roll;
      float cgp;
      char name[100];
   };


int main()
{
   struct student s1;
   s1.roll = 20;
   s1.cgp = 5.0;
   strcpy(s1.name,"Ethun");
   printf("Name is : %s \n",s1.name);
   printf("Roll is : %d \n",s1.roll);
   printf("Cgpa is : %.1f \n \n",s1.cgp);


   struct student s2;
   s2.roll = 10;
   s2.cgp = 4.5;
   strcpy(s2.name,"ESAN");
  printf("Name is : %s \n",s2.name);
  printf("Roll is : %d \n",s2.roll);
  printf("Cgpa is : %.1f \n \n",s2.cgp);

  
  struct student s3;
  s3.roll = 20;
  s3.cgp = 4.3;
  strcpy(s3.name,"RATUL");
  printf("Name is : %s \n",s3.name);
  printf("Roll is : %d \n",s3.roll);
  printf("Cgpa is : %.1f \n",s3.cgp);
     return 0;
}
