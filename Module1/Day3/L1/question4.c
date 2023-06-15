/*Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5*/

#include<stdio.h>
void big_small(int);
int count_digit(int );
int main()
{
    int n,arr[1000];
    printf("Enter the total number of integer:");
    scanf("%d",&n);
    printf("\nEnter the numbers:");
    for(int i=0;i<n;i++)
      scanf("%d",(arr+i));

    printf("Big and small digit of numbers are :\n");
    for(int i=0;i<n;i++)
    {
        int count = count_digit(arr[i]);

         if(count==1)
         {
            printf("For %d :",arr[i]);
            printf("Not Valid");
            printf("\n");
            continue;
         }
         else
         {
            big_small(arr[i]);
         }
         printf("\n");
    }
    return 0;
}
int count_digit(int n)
{
    int count=0;
    while(n)
    {
        count++;
        n=n/10;
    }
    return count;
}
void big_small(int n)
{
    int big=n%10,small=n%10,temp=n;
    while(n)
    {
        int digit=n%10;
        big= (digit>big)?digit:big;
        small= (digit<small)?digit:small;
        n=n/10;
    }
    printf("For %d : %d  %d",temp,big,small);
}