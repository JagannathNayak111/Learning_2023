/*Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.*/
#include<stdio.h>
int main()
{
    int num1,num2;
 
    printf("Enter Number1:" );
    scanf("%d",&num1);

    char operator;
    printf("\nEnter the operator: ");
    scanf(" %c",&operator);

    printf("\nEnter Number2:" );
    scanf("%d",&num2);
    int sum,sub,multi,rem;
    float quoti;
    switch(operator)
    {
        case '+' :  sum=num1+num2;
                    printf("Sum of two number is :%d",sum);
                       break;
        case '-' :  {
                        int type;
                        printf("(1) for subtract num2 from num1 & (2) for subtracting num1 from num2 :");
                        scanf("%d",&type);
                        switch(type)
                        {
                            case 1 : sub = num1 - num2;
                                     printf("By subtracting num2 form num1 , we get :%d",sub);
                                     break;
                            case 2 : sub = num2 - num1;
                                     printf("By subtracting num2 form num1 , we get :%d",sub);
                                     break;
                            default : printf("Invalid input type.");
                                       break;
                        }
                     }
                       break;
        case '*' :  multi= num1 * num2;
                    printf("Multiplication of num1 and num2 is : %d",multi);
                       break;
        case '/' :  {
                        int type;
                        printf("(1) for dividing num1 by num2 & (2) for dividing num2 by num1 :");
                        scanf("%d",&type);
                        switch(type)
                        {
                            case 1 : quoti=(float) num1 / num2;
                                    printf("Quotient after dividing num1 by num2 :%.2f",quoti);
                                    break;
                            case 2 : quoti=(float) num2 / num1;
                                    printf("Quotient after dividing num2 by num1 :%.2f",quoti);
                                     break;
                            default : printf("Invalid input type.");
                                       break;
                        }
                     }
                       break;   
        case '%' :{
                        int type;
                        printf("(1) Finding  dividing num1 by num2 & (2) for dividing num2 by num1 :");
                        scanf("%d",&type);
                        switch(type)
                        {
                            case 1 : rem = num1 % num2;
                                    printf("Quotient after dividing num1 by num2 :%d",rem);
                                    break;
                            case 2 : rem = num2 % num1;;
                                    printf("Quotient after dividing num2 by num1 :%d",rem);
                                     break;
                            default : printf("Invalid input type.");
                                       break;
                        }
                     }
                       break;
        default :  printf("Invalid Operator.");
                    break;    
    }
 
   return 0;
}