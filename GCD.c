#include<stdio.h>
int main()
{
    int a,b,d;
    printf("Enter 1st Nub : ");
    scanf("%d",&a);
    printf("Enter 2nd Nub : ");
    scanf("%d",&b);
  if(a<b ){
      printf("Please Enter a Big Value On 1st Number ");
  }
  d = b;
  if(a%d==0 && b%d==0){
    printf("GCD is : %d \n",d);
  } 
  else{
     for(int i=0; a%d==0 && b%d==0 ;i++){
        d-=1;
     }
  }
return 0;
}