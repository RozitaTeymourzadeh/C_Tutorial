#include <stdio.h>
#include <conio.h>

/*

To find the name of temporary file 

char *tmpnam(char *name);
        
*/

int main()
{
char name[L_tmpnam+1];// find stdio file for the size of name array, it can be find in include file directory in Dev-Cpp
tmpnam(name);
puts(name);

getch();
return 0;
}
    
