/*Count number of Days : 10/04/2015=100*/
#include<stdio.h>
int days(char *);
int leap_year(int );
int main()
{
    char date[11];
    printf("Enter the date int dd/mm/yyyy format :");
    fgets(date,11,stdin);
    int total_days = days(date);
    printf("Total number of days of given date are : %d",total_days);
    return 0;
}
int days(char *date)
{
    int day = 0, month = 0, year = 0, count = 0;
    for(int i=0 ; i<date[i] !='\0';i++)
    {
        if((date[i]>=48 && date[i]<=57) || date[i] == '/')
        {
            if(date[i] == '/')
          {
            count++;
            continue;
          }
        if(count == 0)
          day = day*10 + date[i]-48;
        else if(count == 1)
         month = month*10 + date[i]-48;
        else if(count == 2)
          year = year*10 + date[i]-48;
        }
    } 
    int day_year[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int leap=0;
    leap = leap_year(year);
    if(leap == 1)
     day_year[1] = 29;
     int total_days = day;
     for(int j = month-2; j>=0;j--)
      total_days += day_year[j];
      
      return total_days; 
}
int leap_year(int year)
{
    if(year % 400 == 0)
      return 1;

      if(year % 4 == 0)
      {
        if(year % 100 == 0)
           return 0;

        else 
           return 1;
      }

      return 0;
}