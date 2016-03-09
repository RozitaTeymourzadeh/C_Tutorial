#include <stdio.h>
#include <conio.h>

int main()
{
   int x= 10; 
   int *j;
   
   j = &x;
   
   printf("The value of x is %d\n",x);
   printf("The address of i. e. &x is %p\n",&x);
   printf("The value of x that is *(&x) is %d\n\n", *(&x));
   printf("The memory addres stored in the pointer j is %p\n",j);
   printf("The value pointed by the pointer J is %d\n",*j);
   printf("The address of pointer j is %p\n",&j);
    
getch();
return 0;

}

// & Address of variable
// * Value of operator 
