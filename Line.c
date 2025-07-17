#include<stdio.h>

struct student {
    int roll;
    float gpa;
    char name[100];
};

int main()
{
  struct student s1 ={20,3.5,"Esan"};
  printf("Name is : %s \n" "Roll is : %d \n" "GPA is : %.1f",s1.name,s1.roll,s1.gpa);
return 0;
}