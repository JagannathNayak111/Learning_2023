/*Diff between even & odd indexed elements*/
#include<stdio.h>
void arrayinit(int *,int );
int sum_odd_ind(int *,int );
int sum_even_ind(int *,int );
int difference(int , int);
int main()
{
    int num;
    printf("Enter the size of the array :");
    scanf("%d",&num);
    int arr[1000];
    arrayinit(arr,num);
    int odd = sum_odd_ind(arr,num);
    int even = sum_even_ind(arr,num);
    int diff = difference(even,odd);
    printf("Differnce between even and odd indexed elements : %d",diff);

    return 0;
}
void arrayinit(int *arr, int num)
{
    printf("Enter the elements of array :");
    for(int i=0;i<num;i++)
     scanf("%d",arr+i);
}
int sum_odd_ind(int *arr,int num)
{
    int sum=0;
    for(int i=1;i<num;i=i+2)
      sum = sum + arr[i];

      return sum;
}
int sum_even_ind(int *arr,int num)
{
    int sum=0;
    for(int i=0;i<num;i=i+2)
      sum = sum + arr[i];

      return sum;
}
int difference(int even ,int odd)
{
    int diff=0;
    
    diff = (even>odd) ? (even-odd) :(odd-even);

    return diff;
}