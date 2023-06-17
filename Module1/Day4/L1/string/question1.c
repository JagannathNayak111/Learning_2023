/*Toggle Case*/
#include<stdio.h>
void toggle(char *);
int main()
{
    char str[100];
    printf("Enter the string:");
    fgets(str,100,stdin);
    toggle(str);
    printf("Toggled string :");
    puts(str);
    return 0;
}
void toggle(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
          str[i] = str[i] + 32;

        else if(str[i]>=97 && str[i]<=122)
          str[i] = str[i] -32;

          i++;
    }
}