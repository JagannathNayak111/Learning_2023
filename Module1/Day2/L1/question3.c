/*Write a program to sum every alternate elements of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90

Topics to be covered
- Arrays
- Loops
- Basic Operators
*/
#include<stdio.h>
int main()
{
    int arr[100];
    int num;
    printf("Enter the number of array element:");
    scanf("%d",&num);
    printf("Enter the element of array:");
    for(int i=0;i<num;i++)
    {
        scanf(" %d", (arr + i));
    }
    long long int sum=0;
    for(int j=0;j<num;j=j+2)
     sum = sum + arr[j];

     printf("\nSum of every alternate elements starting from 0 : %d\n",sum);
     return 0;

}