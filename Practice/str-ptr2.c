#include<stdio.h>
#include<string.h>

  struct student {
        int roll;
        float gpa;
        char name[100];
       };

int main()
{
      struct student s1 = {20,5.3,"Esan"};
      struct student *ptr = &s1;
      printf("Student name : %s \n",(*ptr).name);
return 0;
}