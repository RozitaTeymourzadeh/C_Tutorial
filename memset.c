#include <stdio.h>
#include <conio.h>
#include <string.h>


/*

Set the memory value with initial value
void *memset(void *buf, int ch, size_t count);

*/


int main()
{
char data[20];

memset(data,'\0',20);
memset(data,'A',20);
puts(data);

getch();
return 0;
}

