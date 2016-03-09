#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


/*

convert string to no
int atoi(const char *str);

*/


int main()
{
char num1[] = "12b";
char num2[] = "34";
char num3[] = "a34";// no alphabet can be there it will convert to zero

int number1,number2,number3;

number1 = atoi(num1);
number2 = atoi(num2);
number3 = atoi(num3);


printf("%d\t%d\t%d",number1,number2,number3);


getch();
return 0;
}

