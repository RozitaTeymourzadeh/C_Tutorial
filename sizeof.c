#include <stdio.h>
#include <conio.h>

/*

sizeof unary operator
       sizeof(datatype or variable name)
       
return the length in byte of variable or paranthesized type specifier that it preceds
*/

int main()
{

int var;
printf("%d\n", sizeof var);
printf("%d\n",sizeof(double));

int var1[10];
printf("%d\n",sizeof var1);

struct student{
       char name[15];
       int no;
       }Rozita;
printf("%d\n",sizeof (Rozita));


getch();
return 0;
}
    
