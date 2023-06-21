/*Write a program to demonstrate the swapping the fields of two structures using pointers  */
#include<stdio.h>
#include<string.h>
struct example
{
    int a;
    char str[100];
    float b;
};
typedef struct example example;
void input (example *);
void display(example *);
void swapping(example *, example *,example *);
int main()
{
    example e1,e2, temp;
   printf("Enter the elements of 1st struct :\n");
   input(&e1);
  
   printf("Enter the elements of 2st struct :\n");
   input(&e2);
   
   swapping(&e1,&e2,&temp);
   printf("After swapping two struct values are: \n");
   printf("Elements of struct1 :\n");
   display(&e1);
   printf("Elements of struct2 :\n");
   display(&e2);
   return 0;

}
void input(example *e)
{ 
    char s[100];
    printf("Enter an integer value :");
    scanf("%d",&e->a);
    printf("Enter a string :");
    scanf(" ");
    fgets(s,100,stdin);
     strcpy(e->str,s);
    printf("Enter a float value :");
    scanf("%f",&e->b);
}
void swapping(example *e1, example *e2,example *temp)
{   
    
    //integer swapping
     temp->a = e1->a;
     e1->a = e2->a;
     e2->a = temp->a;
     //string swapping
     strcpy(temp->str , e1->str);
     strcpy(e1->str , e2->str);
     strcpy(e2->str , temp->str);
     //float swapping
     temp->b = e1->b;
     e1->b = e2->b;
     e2->b = temp->b;
    
}
void display(example *e)
{
   printf("Integer value : %d\n",e->a);
   printf("String : %s\n",e->str);
   printf("Float value : %.2f\n",e->b);
}