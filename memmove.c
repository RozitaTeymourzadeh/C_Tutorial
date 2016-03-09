#include <stdio.h>
#include <conio.h>
#include <string.h>


/*

move  count size of array From and paste it to array To

void *memmove(void *to, const void *from, size_t count);

*/


int main()
{
int size = 20;
char from[size],to[size];

strcpy(from,"Learning Lad Rocks");
memmove(to,from,10);
printf(to);

getch();
return 0;
}

