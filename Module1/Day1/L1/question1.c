/*Write a function to find biggest of 2 numbers using 
    - if else
    - ternary operator*/
#include<stdio.h>
int ifelse(int num1,int num2)
{
    if(num1>=num2)
     return num1;
     else 
      return num2;
}
int ternary(int num1, int num2)
{
    return (num1>=num2) ? num1 : num2;
}
int main()
{
    int num1,num2,big1,big2;

    printf("Enter thr two numbers:");
    
    scanf("%d %d",&num1 ,&num2);
     
     big1=ifelse(num1,num2);
     big2=ternary(num1,num2);
   
    
     printf("The biggest of two number using ifelse:%d\n",big1);
    
     printf("The biggest of two number using ternary operator:%d\n",big2);
     
     return 0;
}

