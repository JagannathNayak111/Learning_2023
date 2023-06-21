/*Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers 
  (Note: represent complex number using a structure.*/
  //complex num form a+ib.
  #include<stdio.h>
  struct comp_num
  {
    int a,b;
  };
  typedef struct comp_num comp_num;
  void comp_num_init(comp_num *);
  void display(comp_num *);
  void addition(comp_num *, comp_num *, comp_num *);
  void multiplication(comp_num *, comp_num *, comp_num *);
  int main()
  {
     comp_num  c1,c2,res_add,res_mul;
     printf("Complex number is in format a+ib :\n");

     printf("Enter the first complex number :");
     comp_num_init(&c1);

     printf("Enter the second complex number :");
     comp_num_init(&c2);
     
     printf("First complex number is :");
     display(&c1);
     printf("\n");
     printf("Second complex number is :");
     display(&c2);
     printf("\n");
     printf("Addition of first and second complex number :");
     addition(&c1,&c2,&res_add);
     display(&res_add);
     printf("\n");
     printf("Multiplication of first and second complex number :");
     multiplication(&c1,&c2,&res_mul);
     display(&res_mul);
     return 0;
  }
  void comp_num_init(comp_num *c)
  { 
    printf("Enter the a and b:");
    scanf("%d",&c->a);
    scanf("%d",&c->b);
  }
  void display(comp_num *c)
  {  char oper = '+';
     int z = c->b; 
     if(c->b < 0)
      {
        oper = '-';
         z = (-1)* c->b; 
      }
    printf("%d %c i%d",c->a,oper,z);
  }
  void addition(comp_num *c1, comp_num *c2, comp_num *result)
  {
       int x,y;
       x = c1->a + c2->a;
       y = c1->b + c2->b;
        result->a = x;
        result->b = y;
  }
  void multiplication(comp_num *c1, comp_num *c2, comp_num *res_mul)
  {
      int w,x,y,z,r_a,r_b;
      w = c1->a;
      x = c1->b;
      y = c2->a;
      z = c2->b;
      r_a = (w*y) + ((-1)*(x*z));
      r_b = (w*z) + (x*y);
      res_mul->a = r_a;
      res_mul->b = r_b; 
  }