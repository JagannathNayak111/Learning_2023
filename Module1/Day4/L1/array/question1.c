/*Sum & Average of 1D Array*/
#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the size of the array :");
    scanf("%d",&num);
    int arr[1000];
    printf("Enter the elements of the array:");
    for(int i=0;i<num;i++)
      {
        scanf("%d", arr+i);
        sum=sum+arr[i];
      }
      
      float avg;
      avg = (float) sum / num;

      printf("Sum of the all elements of array : %d\n",sum);
      printf("Average of array : %.2f\n",avg);
      
      return 0;
}