#include<string.h>
#include<stdio.h>

typedef struct student {
 int roll;
 float gpa;
 char name[50];
 char college[200];
} leo;

int main()
{
 leo s1={20,5.4,"Esan","Bangladesh Navy College Kaptai"};
 printf("College Name is : %s \n \n",s1.college);
return 0;
}