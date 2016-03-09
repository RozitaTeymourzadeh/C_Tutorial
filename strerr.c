#include <stdio.h>
#include <conio.h>
#include <string.h>


/*

char *strerror(int errnum);

*/


int main()
{
int counter;
for(counter = 0;counter <= 51; counter++){
           
printf("%s\n",strerror(counter));  
  
}
getch();    
return 0;
}

