/*write a program to Store Data for n students in Structures Dynamically.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student 
{
    int roll;
    char name[100];
    char class[10];
};
typedef struct student std;
void input(std *,int );
void display(std *,int );
int main()
{ 
   int num;
   printf("Enter the number of student :");
   scanf("%d",&num);
   std *s1 = (std *) calloc(num,sizeof(std));
   input(s1,num);
   display(s1,num);
   return 0;
}
void input(std *s1,int num)
{
    char n[100],c[10];
    printf("Enter the details of students :\n");
    for(int i=0;i<num;i++)
    {
        printf("Students %d:\n",i+1);
        printf("Enter the roll number :");
        scanf("%d",&s1[i].roll);

       printf("Enter the name of student :");
       scanf(" ");
       fgets(n,100,stdin);
       strcpy(s1[i].name,n);

       printf("Enter the student class : ");
       fgets(c,100,stdin);
       strcpy(s1[i].class,c);
    }
}
void display(std *s1,int num)
{
    printf("Student details :\n");
    for(int i=0;i<num;i++)
    {
         printf("Student %d details :\n",i+1);
         printf("Roll  : %d\n", s1[i].roll);

         printf("Student name :");
         puts(s1[i].name);

         printf("Student class :");
         puts(s1[i].class);
    }
}