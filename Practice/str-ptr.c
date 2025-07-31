#include<stdio.h>
#include<string.h>

 struct student {
    int roll;
    float gpa;
    char name[100];
 };

int main()
{
  struct student s1={20,3.5,"Esan"};
  struct student *ptr = &s1;
  printf("Student Roll is : %d \n", ptr->roll);
  printf("Student Name is : %s \n",ptr->name);
  printf("Student GPA is : %.1f \n \n",ptr->gpa);
return 0;
}