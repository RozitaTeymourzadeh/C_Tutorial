#include <stdio.h>
#include <conio.h>

/*

Defining a union in C: the data will be saved in largest variable, only one variable is use to keep data
union tag_name{
      type member_name;
      type member_name;
      
      };
*/

int main()
{
union data{
      int x;
      char c;
      
      };

union data var;

printf("%d\n",sizeof(union data));

var.x = 23;
printf("%d\n",var.x);

var.c = 'c';

printf("%c\n",var.c);

getch();
return 0;
}
    
