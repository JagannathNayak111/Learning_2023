/*Min & Max of 1D Array*/
#include<stdio.h>
#include<limits.h>
int main()
{
    int num;
    printf("Enter the size of the array:");
    scanf("%d",&num);
    int arr[1000];
    int max=INT_MIN,min=INT_MAX;
    printf("Enter the elements of the array :");
    for(int i=0;i<num;i++)
     {
        scanf("%d",arr+i);
         min = (arr[i]<min) ? arr[i] : min;
         max = (arr[i]>max) ? arr[i] : max;
     }
    printf("Maximun of elements of array : %d\n",max);
    printf("Minimum of elements of array : %d\n",min);
     return 0;
}