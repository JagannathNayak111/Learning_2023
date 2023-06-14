/*Write a function to return the greatest of 3 number using if else if.*/
#include<stdio.h>
int if_else_if(int , int ,int);
int main()
{
    int big,num1,num2,num3;
    printf("Enter the three numbers:");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
       big = if_else_if(num1,num2,num3);
     printf("The biggest of three numbers : %d" , big);
   
    return 0;
}
int if_else_if(int num1, int num2 ,int num3)
{
    if(num1>=num2 &&  num1>=num3)
      return num1;
      else if(num2>=num1 && num2>=num3)
        return num2;
        else 
          return num3;
    return num1;
}