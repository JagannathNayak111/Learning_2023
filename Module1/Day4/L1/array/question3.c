/*Reverse The Array*/
#include<stdio.h>
void reverse (int *, int);
void arrayinit (int *, int );
void disparray(int * , int );
int main()
{
    int num;
    int arr[1000];
    printf("Enter the size of the array :");
    scanf("%d",&num);
    arrayinit(arr,num);
    reverse(arr,num);
    disparray(arr,num);
     return 0;
}
void arrayinit(int *arr, int num)
{
    printf("Enter the elements of the array :");
      for (int i=0;i<num;i++)
         scanf("%d", arr+i);
}
void reverse (int *arr, int num)
{
    for(int i=0,j=num-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
void disparray(int *arr, int num)
{
   printf("Array after reversing :");
    for(int i=0;i<num;i++)
     printf("%d ",arr[i]);
}