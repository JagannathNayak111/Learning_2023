/*Write a program to encode any given string such that it gets converted into an unrecognizable form. 
Also write a decode function to get back the original string.

*/
#include<stdio.h>
void encode(char *);
void decode(char *);
int main()
{
    char str[1000];
    printf("Enter the string:");
    fgets(str,1000,stdin);
      encode(str);
      printf("String after encoding:");
      puts(str);
      int check;
      printf("To decode the string press 1 else 0 .");
      scanf("%d",&check);
      if(check)
        {
            decode(str);
            printf("String after dencoding:");
            puts(str);
        }

        return 0;
}
void encode(char * str)
{
     int i=0;
    while(str[i]!='\0')
    {
        str[i] = str[i] + 1;
        i++;
    }
}
void decode(char * str)
{
     int i=0;
    while(str[i]!='\0')
    {
        str[i] = str[i] - 1;
        i++;
    }
}