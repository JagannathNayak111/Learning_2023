/*Convert String as Integer*/
#include<stdio.h>
int conversion(char *);
int main()
{
    char str[100];
    printf("Enter the string :");
    fgets(str,100,stdin);
    int int_con = conversion(str);

    printf("Converted number : %d", int_con);
 return 0;
}
int conversion(char *str)
{
    int num=0;
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>=48 && str[i]<=57)
         {
            int n = str[i]-48;
            num = num*10 + n;
         }
         i++;
    }

    return num;
}