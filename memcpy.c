#include <stdio.h>
#include <conio.h>
#include <string.h>


/*

copy  count size of array From and paste it to array To

void *memcpy(void *to, const void *from, size_t count);

*/


int main()
{
int size = 20;
char from[size],to[size];

strcpy(from,"Learning Lad Rocks");
memcpy(to,from,10);
printf(to);

getch();
return 0;
}

