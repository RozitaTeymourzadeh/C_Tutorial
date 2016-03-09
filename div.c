#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


/*

div_t div(int numerator,int denominator);

the structure type div_t has 2 elements
    int quot; to store the qoutient
    int rem; to store the remainder

*/


int main()
{
div_t n;
n = div(10,3);
printf("The qoutient is %d\nThe remainder is %d",n.quot,n.rem);

getch();
return 0;
}

