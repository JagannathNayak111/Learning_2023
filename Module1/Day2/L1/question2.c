/*Write a program to swap any type of data passed to an function.

Topics to be covered
- Pointers
- Type Casting*/


//Example - swaping data type of int and char.

#include<stdio.h>
void swap(int* , char* );
int main()
{
    
    int num1;
    char num2;
    //take integer printable character(Ascii- 33 to 126) to get suitable output.
    printf("Enter an integer number:");
    scanf("%d",&num1);
    printf("Enter a char number:");
    scanf(" %c",&num2);
  
      printf("Number before swapping :\n");
      printf("Number1:%d\n",num1);
      printf("Number2:%c\n",num2);
      
      swap(&num1,&num2);
      
      printf("Number after swapping :\n");
      printf("Number1:%c\n",num1);
      printf("Number2:%d\n",num2);
     return 0;
}
void swap(int *ptr1, char *ptr2)
{
    void *temp;
    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
    temp= NULL;
}