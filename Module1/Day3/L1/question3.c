/*Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

Concepts to be used.
- Loops
- Operators*/

#include<stdio.h>
int number(int *, int );
int main()
{
    int num,temp;
    printf("Enter a four digit number:");
    scanf("%d",&num);
    temp = num;
    int i=3,arr[4],big=0;
    while(temp)
    {
        int digit = temp % 10;
        arr[i] = digit;
        i--;
        temp = temp / 10;
    }
    for(int j=0; j<4; j++)
    {
       int n = number(arr,j);
        big = (n>big)? n : big;
    }

   printf("The biggest number form input number: %d",big);

return 0;
}
int number(int *arr, int j)
{
    int n = 0;
    for(int i=0;i<4;i++)
    {
        if(i==j)
         continue;
         else
         {
            n = (n*10) + *(arr + i);
         }
    }
    return n;
}