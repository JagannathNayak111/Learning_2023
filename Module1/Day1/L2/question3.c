/*Write a function to find if a give character is vowel using switch case statements, 
    - If vowel, return 1
    - If not vowel, return 0;

In main print,
"Vowel" if return value is 1
"Not Vowel" if return value is 0*/
#include<stdio.h>
int check_vowel(char );
int main()
{
   char ch;
   printf("Enter a character:");
   scanf(" %c",&ch);
   int check = check_vowel(ch);
   printf("\n");
   if(check)
     printf("Vowel");
     else 
     printf("Not Vowel");
    
    return 0;
}
int check_vowel(char ch)
{
    if(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u')
     return 1;
    else if(ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U')
     return 1;
    
    return 0;
}