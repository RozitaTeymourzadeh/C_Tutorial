#include <stdio.h>
#include <conio.h>
#include <ctype.h>


/*
int isprint(int ch);
int iscntrl(int ch);

*/


int main()
{
char ch = '\n';
//printf("Key in a character:");
//gets(&ch);

if(isprint(ch)){
                printf("the data %c is printable\n",ch);
                }else{
                printf("the data %c is not printable\n",ch);     
                }
 
 if(iscntrl(ch)){
                printf("the data %c is controlable\n",ch);
                }else{
                printf("the data %c is not controlable\n",ch);     
                }                               
                
getch();
return 0;
}

