/* Write a program to find total number of bits set in a given array.
Say we have a array of 3 elements
a[3] = {0x1, 0xF4, 0x10001};
The total number of set bits in the given array is
1 bit in 0x01, 5 in 0xF4, 2 in 0x10001, so the total is 1 + 5 + 2 = 8 bits

Topics to be covered
- Arrays
- Loops
- Bitwise Operators*/

#include<stdio.h>
int set_bit(int* );
int main()
{
    int arr[100];
    int num ;
    printf("Enter the number of element of array:");
    scanf("%d",&num);
    printf("Enter the element of array:\n");
    for (int i=0; i<num; i++)
     scanf("%d",arr+i);
    int sum=0;
    for(int j=0; j<num; j++)
    {
        int count=set_bit(arr+j);
        sum = sum + count;
    }
    printf("Total  number of set bits is: %d",sum);
     return 0;
}
int set_bit(int* arr)
{
    int count=0;
    int num = *arr;
    while(num)
    {
        if(num&1)
          count++;
        
        num = num>>1;
    }
    return count;
}