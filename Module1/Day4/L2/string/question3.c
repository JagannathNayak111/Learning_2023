/*Data Validation
Given a string, check if it’s in valid e-mail format, username@domain.ext
username should be alphanumeric or dot is allowed
Domain name and Extension should be alphabets and lower case only*/
#include<stdio.h>
#include<string.h>
int valid(char *, int );
int main()
{
    char email[1000];
    printf("Enter the email id : ");
    fgets(email,1000,stdin);
    int len = strlen(email);
    email[len-1]='\0';
    len = strlen(email);
    int check = valid(email,len);
    
    if(check)
    {
        printf("Email is valid.");
    }
    else 
      printf("Email is not valid.");
    return 0;
}
int valid(char *email, int len)
{
    char username[1000],domain[1000],ext[1000];
     int i=0,u=0,d=0,e=0;

    while(email[i]!='@')
      { 
         username[u]=email[i];
         i++;
         u++;
      }
      username[u]='\0';
      i++;
      while(email[i]!='.')
        {
            domain[d]=email[i];
            i++;
            d++;
        }
        domain[d]='\0';
        i++;
        while(email[i]!='\0')
        {
            ext[e]=email[i];
            e++;
            i++;
        }
         ext[e]='\0';
       
        for(int j=0;j<strlen(username);j++)
        {
            if((username[j]>=65 && username[j]<=90) || (username[j]>=97 && username[j]<=122) || (username[j]>=48 && username[j]<=57) || username[j] == '.')
                continue;
                else 
                  return 0;
        }
     
        for(int j=0;j<strlen(domain);j++)
        {
            if((domain[j]>=97 && domain[j]<=122) )
                continue;
                else 
                  return 0;
        }
       
        for(int j=0;j<strlen(ext);j++)
        {
            if((ext[j]>=97 && ext[j]<=122) )
                continue;
                else 
                  return 0;
        }
        
   return 1;
}