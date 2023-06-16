/*W.A.P to compare the items in a box, assume equal size boxes
Boxes shall have unique items stored in random order
Boxes are compared True if there is one to one mapping of items
return the final result 1 or 0

Example of Equal Boxes:
A[3] = {200, 10, -90}
B[3] = {-90, 200, 10}    

Example of Unequal Boxes:
A[3] = {200, 9, -90}
B[3] = {-90, 200, 10}    

Note: The array should not be sorted

Topics to be covered
- Arrays
- Loops
- Basic Operator*/
#include<stdio.h>
int compare_box(int * , int *, int n);
int main()
{
    int num;
    printf("Enter the size of both the array(sizes are equal):");
    scanf("%d",&num);
    int A[1000],B[1000];
    printf("Enter the elements of array A :");
    for(int i=0;i<num;i++)
     scanf("%d",A+i);
     printf("Enter the elements of array B :");
    for(int i=0;i<num;i++)
     scanf("%d",B+i);
     int result=compare_box(A,B,num);
     if (result)
     {
        printf("Equal Boxex.");
     }
     else 
        printf("Unequal Boxex.");
     
     return 0;

}
int compare_box(int *A, int *B, int n)
{
    int count=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i]==B[j])
              count++;
        }
    }

    return (count==n)?1 : 0;
}