/*Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
    - Set 1st bit, if operation type is 1
    - Clear 31st bit, if operation type is 2
    - Toggle 16th bit, if operation type is 3
   You can consider the below function prototype,
    - bit_operations(int num, int oper_type);*/

#include<stdio.h>
int bit_operations(int , int);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int oper_type;
    printf("Enter the opration type:\n");
   printf(" - Set 1st bit, if operation type is 1\n");
    printf("- Clear 31st bit, if operation type is 2\n");
   printf(" - Toggle 16th bit, if operation type is 3\n");
   scanf("%d",&oper_type);
    int result = bit_operations(num , oper_type);
     
    if(!(oper_type>=1 && oper_type<=3))
      {
        printf("Invalid operation input.");
        return 0;
      }

     printf("Number before operation :%d\n",num);
     printf("Number after operation :%d\n",result);

     return 0;
}
int bit_operations(int num, int oper_type)
{
    switch(oper_type)
    {
        case 1:  num  = num | 1<<0;
                  break;
        case 2:   num = num &(~(1<<30));
                    break;
        case 3:   num = num ^ (1<<15);
                       break;
          
    }
    return num;
}