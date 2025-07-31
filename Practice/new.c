#include<stdio.h>
#include<string.h>

    struct student {
       int  roll ;
       float gpa;
       char name[100];
      };

int main()
{
   struct student ECO[100];
   struct student RCO[100];
   struct student FCO[100];


   struct student s1={100,5.3,"Miss Etu"};
   printf("Student roll : %d \nStudent GPA : %.1f  \nStudent name is : %s \n\n",s1.roll,s1.gpa,s1.name);
return 0;
}