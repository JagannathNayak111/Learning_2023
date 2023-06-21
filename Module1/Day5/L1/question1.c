/*Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.*/

   #include<stdio.h>
    struct box
    {
        int vol,sur_area;//volume surface area
    };
    
    int main()
    {    
        typedef struct box box;
        int len,wdt,hgt;//length,width,height
        printf("Enter the length ,width and height of the box :");
        scanf("%d",&len);
        scanf("%d",&wdt);
        scanf("%d", &hgt);
         box b;
        box *ptr = &b;
         ptr->sur_area = 2 * ((len * wdt) + (len * hgt) + (wdt * hgt));
         ptr->vol = (len * wdt * hgt);
         printf("Surface Area and Volume of the box : %d & %d \n", (*ptr).sur_area , (*ptr).vol);
         return 0;
    }