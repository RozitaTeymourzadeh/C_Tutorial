#include <stdio.h>
#include <conio.h>

void display (int* , int* );

int main()
{
  int x,y;
  x = 100;
  y = 200;
  
   printf("The  old value of x and y are %d and %d\n", x,y);
  
   display (&x,&y);
   
   printf("The  new value of x and y are %d and %d\n", x,y);
   
getch();
return 0;

}

void display (int *p, int *q){
     
     printf("%d\t%d\n", *p,*q);
     *p = 10;
     *q = 20;  
     }
