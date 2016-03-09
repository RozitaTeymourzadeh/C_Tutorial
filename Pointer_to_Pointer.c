#include <stdio.h>
#include <conio.h>

int main()
{
   int x= 10; 
   int *p;
   int **q;
   
   p = &x;
   q = &p;
   
   printf("x value is %d\n", x);
   printf("address of x is %u\n",&x);
   printf("The value of p is %u\n",p),
   printf("The address of p is %u\n", &p);
   printf("The value pointed by the pointer p is %d\n", *p);
   printf("The value of q is %u\n",q);
   printf("The address of q is %u\n", &q);
   printf("The value of x by using pointer to a pointer i. e. %d\n", **q);
   
   
getch();
return 0;

}

