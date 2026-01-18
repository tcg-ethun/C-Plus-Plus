#include<stdio.h>
int main()
{

    int a,i ,s;
    printf("Enter a number : ");
    scanf("%d",&a);
  for (i = 1;i<=a;i+=2){
    printf("Serial is : %d \n",i);
    s+=i;
  };
printf("The sum of numbers is : %d",s);
return 0;
}