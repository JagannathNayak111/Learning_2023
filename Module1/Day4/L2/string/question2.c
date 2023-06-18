/*Rotate string ex: "abcdxyz"-2-Left-"cdxyzab"*/
#include<stdio.h>
#include<string.h>
void rotate(char *, int , char ,int );
int main()
{
    int len;
    char str[1000];
    printf("Enter the string to be rotated :");
    fgets(str,1000,stdin);
    len = strlen(str);
    str[len-1]='\0';
    len = strlen(str);
    char mode ;
    printf("Enter the type of shifting L/R or l/r : ");
    scanf(" %c", &mode);
    int k;
    printf("Enter the no. of shifting :");
    scanf("%d",&k);
    rotate(str,k,mode,len-1);
    printf("Rotated string is :");
   puts(str);
    
    return 0;
}
void rotate(char *str, int k, char mode,int len)
{
    if(mode == 'L' || mode == 'l')
    {
        char temp[1000];
        for(int i=0;i<k;i++)
          temp[i]=str[i];

         int i=0,j=k;
         while(j<=len)
           {
             str[i]=str[j];
             i++;
             j++;
           }
           int k=0;
           while(i<=len)
           {
            str[i]=temp[k];
            i++;
            k++;
           }

    }
    else if(mode == 'R' || mode == 'r')
    {
        char temp[1000];
        int n = len - k + 1;
        for(int i=0;n<=len;i++,n++)
         temp[i] = str[n];
         n= len - k ;
         int j= len;
         while(n>=0)
         {
            str[j]= str[n];
            j--;
            n--;
         }
         for(int d=0;d<k;d++)
          str[d]= temp[d];
    }
}