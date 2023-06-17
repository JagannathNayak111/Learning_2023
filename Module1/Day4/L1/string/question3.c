/*Compute Total Seconds*/
#include<stdio.h>
int seconds(char *);
int main()
{
    char time[100];
    printf("Enter the time in hh:mm:ss format :");
    fgets(time,100,stdin);
    int total_sec = seconds(time);
    printf("Total seconds : %d", total_sec);
    return 0;
}
int seconds(char * time)
{
    int hr=0,min=0,sec=0,count=0;
    int n,m,l;
    for(int i=0;time[i]!='\0';i++)
    {
        if(time[i]==':')
          {
            count++;
            continue;
          }
          if(time[i]>=48 && time[i]<=57)
          {
            switch(count)
          {
            case 0 :  n = time[i]-48;
                       hr = hr*10 +n;
                       break;
            case 1 :  m = time[i]-48;
                       min = min *10 + m;
                       break;
            case 2 :  l = time[i] -48;
                         sec = sec*10 + l;
                         break;
          }
          }

    }
    int total = hr*3600 + min*60 + sec;

    return total;
}