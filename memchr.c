#include <stdio.h>
#include <conio.h>
#include <string.h>


/*

It is used to search a character
void *memchr(const void *buffer,int ch,size_t count);

*/


int main()
{

char *p;
char data[] = "Rozita Teymourzadeh"; 
char search = 'z';  

p = memchr(data,search ,strlen(data));                          
 
if (p != NULL){
                       puts(p);}
      else{
                       puts("Charecter is not present");
                   };
                
getch();
return 0;
}

