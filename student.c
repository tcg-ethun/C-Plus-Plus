#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float gpa;
    char name[100];
};

int main()
{
   struct student EM[3];
  EM[0].roll = 1;
  EM[0].gpa = 4.5;
strcpy(EM[0].name,"Ethun");

EM[1].roll = 2;
EM[1].gpa = 4.5;
strcpy(EM[1].name,"Tithi");

EM[2].roll = 3;
EM[2].gpa = 4.9;
strcpy(EM[2].name,"Resmi");

EM[3].roll = 4;
EM[3].gpa = 5.6;
strcpy(EM[3].name,"Atib");

printf("Tithi Roll is : %d \n",EM[1].roll);
printf("Atib GPA is : %.1f",EM[3].gpa);
return 0;
}