#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*

Storage classes in C
        Automatic (Default, Default value = garbage No.)
        Register (CPU register, variable frequently is using like looping register, Default value = garbage No.)
        Static (Heap memory, Default value = 0)
        External (Heap memory, Default value = 0, global variable and available to all function)

*/
    
void inc(){
     {
     static int z;
     printf("static z is %d\n",z);
     printf("static z is %d\n",z++);
     }
     // printf("%d",z); //z is not accessed here .. 
     }

void display(){
     extern int n; // it should be defined as extern
     printf("extern n is %d\n",n);
     }

int main()
{
/*default = automatic storage */

int a;

 /*automatic storage */

{
 auto int x;
 printf("auto x is %d\n",x);
}//x only accessable inside block

// printf("%d",x); //x is not accessed here ..
 
 
 /*Register storage */
{
 register int y;
 printf("register y is %d\n",y);
}//y only accessable inside block
// printf("%d",y); //y is not accessed here .. 

/*static storage */

inc();
inc();
inc();//  The value is kept after recall the function

/*External storage */

extern int n;
printf("extern n is %d\n",n);
display ();

getch();
return 0;
}
    
int n = 10;
