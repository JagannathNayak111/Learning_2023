/*Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.*/

#include<stdio.h>
#include<string.h>
int main()
{  
      char name[20];
      printf("Enter name:");
      fgets(name, sizeof(name),stdin);
      

    int total,roll_no,mark_math,mark_phy,mark_chem;

    printf("Enter the roll number:");
    scanf("%d",&roll_no);
    
    
    printf("Enter the marks obtained in phy, chem and math:");
    scanf("%d %d %d",&mark_phy,&mark_chem,&mark_math);
    total = mark_chem + mark_math + mark_phy;
    float percentage;
    percentage=((float) total/300.0)*100.0;
    printf("\n");
    printf("Report Card:\n");
    printf("Name:");
    puts(name);
    printf("\nRoll Number:%d\n",roll_no);
    printf("Marks obtained in phy, chem and math: %d %d %d\n",mark_phy,mark_chem,mark_math);
    printf("Total mark obtained : %d\n",total);
    printf("Percentage obtained : %2.2f\n ",percentage);
   
  return 0;
}