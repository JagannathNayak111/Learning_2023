/*Write a function xstrchr() which scans a string from beginning to end in search of a character. 
If the character is found, it should return a pointer to the first occurrence of the given character in the string.
If the given character is not found, the function returns a NULL.
The prototype of the function should be:

char *xstrchr(char *string, char ch):*/

#include<stdio.h>
char *xstrchr(char *string, char ch);
int main()
{
    char str[1000];
    printf("Enter the content of string:");
    fgets(str,1000,stdin);
    char ch;
    printf("Enter the character to be searched:");
    scanf(" %c",&ch);
    char *ch_search = NULL;
    ch_search = xstrchr(str,ch);
    if(ch_search == '\0')
    {
        printf("Given character not found.");
    }
    else
    {
        printf("First occurrence of the given character is: %x",ch_search);
    }
    return 0;
}
char *xstrchr(char *string, char ch)
{
    int i=0;
    char *result = NULL;
    
    while(string[i] != '\0')
    {
        if(string[i]==ch)
          {
            result= string+i;
            return result;
          }
          i++;
    }
    return result;
}