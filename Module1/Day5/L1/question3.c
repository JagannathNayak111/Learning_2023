/*Write a program using structures to calculate the difference between two time periods using a user-defined function.*/
#include<stdio.h>
struct time 
{
    int hh,min,sec;
};
typedef struct time time;
time diff;
void time_input(time *);
void difference(time *,time *);
void display(time *);
int main ()
{
    time t1,t2;
  printf("Enter the time first period(24 hr format in hh:mm:ss) : ");
  time_input(&t1);
  printf("Enter the time second period(24 hr format in hh:mm:ss) : ");
   time_input(&t2);
   
   printf("Time 1 :");
   display(&t1);
  
    printf("Time 2:");
    display(&t2);
   
   difference(&t1,&t2);
   
   printf("Difference of time :");
   display(&diff);
   return 0;
}
void time_input(time * t)
{
    int h,m,s;
    scanf("%d",&h);
    scanf("%d",&m);
    scanf("%d",&s);
    t->hh = h;
    t->min = m;
    t->sec = s;
}
void display(time * t)
{
    printf("%d:%d:%d\n",t->hh,t->min,t->sec);
}
void difference(time *t1,time *t2)
{
    int t_h,t_m,t_s;
    if(t1->hh > t2->hh)
    {
        t_s = t1->sec + (60 - t2->sec);
        t_m = t1->min + (60 - (t2->min + 1));
        t_h = t1->hh - (t2->hh + 1);
        if(t_s >= 60)
         { 
            int mul = t_s/60;
            t_s = t_s % 60;
            t_m = t_m + mul;
         }
         if (t_m >= 60)
         {
            int mul = t_m/60;
            t_m = t_m % 60;
            t_h = t_h + mul;
         }
         diff.hh = t_h;
         diff.min = t_m;
         diff.sec = t_s;
    }
    else if(t1->hh < t2->hh)
    {
        t_s = t2->sec + (60 - t1->sec);
        t_m = t2->min + (60 - (t1->min + 1));
        t_h = t2->hh - (t1->hh + 1);
        if(t_s >= 60)
         { 
            int mul = t_s/60;
            t_s = t_s % 60;
            t_m = t_m + mul;
         }
         if (t_m >= 60)
         {
            int mul = t_m/60;
            t_m = t_m % 60;
            t_h = t_h + mul;
         }
         diff.hh = t_h;
         diff.min = t_m;
         diff.sec = t_s;
    }
    else if(t1->hh == t2->hh)  
    {
        t_h = 0;
        if(t1->min > t2->min)
        {
            t_s = t1->sec + (60 - t2->sec);
            t_m = t1->min - (t2->min + 1);
            if(t_s >= 60)
            {
                int mul = t_s / 60;
                t_s = t_s % 60;
                t_m = t_m + mul;
            }
            if(t_m >= 60)
            {
                int mul = t_m / 60;
                t_m = t_m % 60;
                t_h = t_h + mul;
            }
            diff.hh = t_h;
            diff.min = t_m;
            diff.sec = t_s;
        }
        else if(t1->min < t2->min)
        {
            t_s = t2->sec + (60 - t1->sec);
            t_m = t2->min - (t1->min + 1);
            if(t_s >= 60)
            {
                int mul = t_s / 60;
                t_s = t_s % 60;
                t_m = t_m + mul;
            }
            if(t_m >= 60)
            {
                int mul = t_m / 60;
                t_m = t_m % 60;
                t_h = t_h + mul;
            }
            diff.hh = t_h;
            diff.min = t_m;
            diff.sec = t_s;
        }
        else if(t1->min == t2->min)
        {
            t_m = 0;
            if(t1->sec > t2->sec)
            {
                t_s = t1->sec - t2->sec;
                if(t_s >= 60)
             {
                int mul = t_s / 60;
                t_s = t_s % 60;
                t_m = t_m + mul;
             }
             if(t_m >= 60)
             {
                int mul = t_m / 60;
                t_m = t_m % 60;
                t_h = t_h + mul;
             }
              diff.hh = t_h;
              diff.min = t_m;
              diff.sec = t_s;
            }
            else if(t1->sec < t2->sec) 
            {
                t_s = t2->sec - t1->sec;
                if(t_s >= 60)
                { 
                int mul = t_s / 60;
                t_s = t_s % 60;
                t_m = t_m + mul;
                 }
               if(t_m >= 60)
               {
                int mul = t_m / 60;
                t_m = t_m % 60;
                t_h = t_h + mul;
               }
              diff.hh = t_h;
              diff.min = t_m;
              diff.sec = t_s;
            }
            else if (t1->sec == t2->sec)
             {
                diff.hh = 0;
                diff.min = 0;
                diff.sec = 0;
             }
        }
    }
}