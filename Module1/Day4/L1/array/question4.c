/*Diff between even & odd elements*/
#include<stdio.h>
void arrayinit(int *, int );
int odd_ele_sum(int *, int );
int even_ele_sum(int *, int );
int diffrence(int ,int );
int main()
{
    int num ;
    printf("Enter the size of the array :");
    scanf("%d",&num);
    int arr[1000];
    arrayinit(arr,num);
    int even = even_ele_sum(arr,num);
    int odd = odd_ele_sum(arr,num);
    int diff=diffrence(even,odd);
    
    printf("Difference between even and odd elements : %d",diff);
return 0;
}
void arrayinit(int *arr, int num)
{
     printf("Enter the elements of array :");
    for(int i=0;i<num;i++)
     scanf("%d",arr+i);
}
int odd_ele_sum(int *arr, int num)
{
    int sum=0;
    for(int i=0;i<num;i++)
     {
        if(arr[i]%2 !=0)
          sum=sum+arr[i];
     }
     return sum;
}
int even_ele_sum(int *arr, int num)
{
    int sum=0;
    for(int i=0;i<num;i++)
     {
        if(arr[i]%2 ==0)
          sum=sum+arr[i];
     }
     return sum;
}
int diffrence(int even,int odd)
{
    int diff=0;
    if(even>odd)
      diff=even-odd;
    else 
       diff=odd-even;
  return diff;
}
