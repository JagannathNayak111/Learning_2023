/*Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
    - Set 2 bits from nth bit position, if operation type is 1
    - Clear 3 bits from nth bit position, if operation type is 2
    - Toggle MSB, if operation type is 3
   You can consider the below function prototype,
    - bit_operations(int num, int oper_type, int pos);*/
    #include<stdio.h>
    int bit_operations(int , int , int );
    int bit_count(int );
    int main()
    {
        int num;
        printf("Enter the number on which bit operation to be held:");
        scanf("%d", &num);
        int oper_type;
        printf("Enter the opration type:\n");
        printf("Set 2 bits from nth bit position, if operation type is 1\n");
        printf("Clear 3 bits from nth bit position, if operation type is 2\n");
        printf("Toggle MSB, if operation type is 3\n");
        scanf("%d", &oper_type);
        if(!(oper_type>=1 && oper_type<=3))
          {
            printf("Invalid operation type.\n");
            return 0;
          }
        int pos;
        int msb=bit_count(num);
        if(oper_type==3)
           pos=msb;
         else 
          {
            printf("\nEnter the pos for num modification:");
             scanf("%d",&pos);
          }
        int result = bit_operations(num,oper_type,pos);
        printf("\nNumber before modification : %d\n",num);
        printf("Number after modification : %d\n",result);
        return 0;
    }
    int bit_operations(int num, int oper_type, int pos)
    {  
        switch(oper_type)
        {
            case 1: num = num | 1<<(pos-1);
                    num = num | 1<<(pos-2);
                    break;
            case 2: num = num & (~(1<<(pos-1)));
                    num = num & (~(1<<(pos+1)));
                    num = num & (~(1<<(pos-2)));
                    break;
            case 3: num = num ^ 1<<(pos-1);
                    break;
        }
        return num;
    }
    int bit_count(int num)
    {
        int count=0;
        while(num)
        {
            count++;
            num =num>>1;
        }
        return count;
    }