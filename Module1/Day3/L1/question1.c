/*Patern Generator:
Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
1234554321
1234  4321
123    321
12      21
1        1

Concepts to be used.
- Loops*/

#include<stdio.h>
void print_type1(int );
void print_space(int );
void print_type2(int );
int main()
{
    int n;
    printf("Enter the n number of rows for pattern:");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        int n1;
        n1 = n-i;
        print_type1(n1);

        int space = i;
        print_space(space);

        print_type2(n1);

        printf("\n");
    }
    return 0;
}

void print_type1(int n)
{
    for(int j=1; j<=n; j++)
      printf("%d",j);
}

void print_space(int n)
{
    n = n * 2;
    for(int j=0; j<n; j++)
     printf(" ");
}

void print_type2(int n)
{
    for(int j=n; j>0; j--)
      printf("%d",j);
}