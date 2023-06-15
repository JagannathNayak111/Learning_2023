/*Prints Bits:
Scan a 32bit integer and prints its bits.

Concepts to be used.
- Loops
- Bitwise Operators*/

#include<stdio.h>
int main()
{
    __INT32_TYPE__ a;
    printf("Enter a 32 bit integer:");//unsigned integer
    scanf("%d",&a);
    printf("Bits of integer a (from right to left):\n");
    while(a)
    {
        int n;
        n = a & 1;
        printf("%d",n);
        printf(" ");
        a = a>>1;
    }
    return 0;
}