/*Write a function to return the grade of the given student using switch case statements
90 to 100 -> 'A'
75 to 89 -> 'B'
60 to 74 -> 'C'
50 to 59 -> 'D'
36 to 49 -> 'E'
0 to 35 -> 'F'
In main check the return value and print the below
65 -> "Grade A"
66 -> "Grade B"
67 -> "Grade C"
68 -> "Grade D"
69 -> "Grade E"
70 -> "Grade F"*/
#include<stdio.h>
char return_grade(int );
int main()
{
    int marks;
    printf("Enter the obtained mark:");
    scanf("%d",&marks);
    char grade = return_grade(marks);
    if(grade>=65 && grade<=70)
      printf("Grade %c",grade);
      else 
        printf("Invalid grade ");
 
   return 0;
}
char return_grade(int marks)
{
       int grade;

       if(marks>=90 && marks<=100) 
          grade=1;
          else if(marks>=75 && marks<=89)
            grade=2;
            else if(marks>=60 && marks<=74)
            grade=3;
            else if(marks>=50 && marks<=59)
             grade=4;
             else if(marks>=36 && marks<=49)
              grade=5;
              else if(marks>=0 && marks<=35)
               grade=6;
               else 
                 grade=7;
      switch(grade)
      {
        case 1:  return 'A';
                  break;
        case 2:  return 'B';
                  break;
        case 3: return 'C';
                break;
        case 4: return 'D';
                  break;
        case 5 :  return 'E';
                  break;
        case 6: return 'F';
                  break;
        default : return '\0';
                   break;
      }
      return '\0';
}