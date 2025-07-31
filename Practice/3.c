#include<stdio.h>
#include<string.h>

struct student {
int roll ;
float gpa;
char name[100];
};

void printfinf(struct student value);

int main()
{
 struct student s1 = {1,5.0,"Esan"};
 printfinf(s1); 
 struct student s2 = {2,4.3,"Ratul"};
 printfinf(s2); 
 struct student s3 = {3,3.5,"Atib"};
 printfinf(s3); 

return 0;
}


void printfinf(struct student value){
  printf("Student Name is : %s \n",value.name);
  printf("Student Roll is %d \n",value.roll);
  printf("Student GPA is : %.1f \n \n",value.gpa);
}