/*Write a program to swap every alternate element of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be a[5] = {30, 20, 10, 40, 50}
one more example a[5] = {10, 20, 30, 40, 50, 60}, the result should be a[5] = {30, 20, 10, 60, 50, 40}

Topics to be covered
- Arrays
- Loops
- Basic Operators
*/
#include<stdio.h>
void swap_alternate(int* , int );
int main()
{
    int n;
    printf("Enter the number element of array:");
    scanf("%d",&n);
    int arr[1000];
    printf("Enter the element of array:\n");
    for(int i=0;i<n;i++)
      scanf("%d",arr+i);
    if(n<3)
    {
      printf("Alternate element of array cannot be swapped due to les number of element present in the array.");
      return 0;
    }
    else
    {
       swap(arr,n);
       printf("After swapping the array looks like:");
       for(int k=0;k<n;k++)
        printf("%d ",*(arr+k));
    }
    return 0;
}
void swap_alternate(int* arr, int n)
{
  for(int j=0,d=j+2; j<n && d<n;j=d+1,d=j+2)
          {
           int temp;
           temp=arr[j];
           arr[j]=arr[d];
           arr[d]=temp;
          }
  
}