/*Write a function to find the type of the character passed
    - 'A' to 'Z', return 1
    - 'a; to 'z', return 2
    - '0' to '9', return 3
    - Any Other printable symbols, return 4
    - Non printable symbols, return 5 
    */
   #include<stdio.h>
   int char_type(char );
   int main()
   {
    char ch;
    printf("Enter the character :");
    scanf(" %c", &ch);
    int type = char_type(ch);

    if(type==1)
     printf("Character is from A to Z\n");
     else if(type==2)
     printf("Character is from a to z\n");
     else if(type==3)
     printf("Character is from 0 to 9\n");
     else if(type==4)
     printf("Any Other printable symbols \n");
     else if(type ==5)
       printf("Non printable symbols\n");
       else 
         printf("Invalid input character.\n");
    return 0;
   }
   int char_type(char ch)
   {
         if(ch>=0 && ch<=127)
         {
             if(ch>=33 && ch<=126)
             {
                if(ch>=65 && ch<=90)
               return 1;
             else if(ch>=97 && ch<=122)
              return 2;
              else if(ch>=48 && ch<=57)
               return 3;
               else 
                return 4;
             }
             else
              return 5;
         }
         return -1;
   }