#include <stdio.h>
#include <conio.h>
#include <ctype.h>


/*
int ispunct(int ch); return 0 if non-puctuator or digit and return non-zero if puctuator or digit key in , []'\{}
int isspace(int ch); return 0 if non-space and return non-zero if space key in, space or tab


*/


int main()
{

char ch;

printf("Key in a puncuator:");
gets(&ch);

if(ispunct(ch)){
                printf("the data %c is Puncuator\n",ch);
                }else{
                printf("the data %c is not Puncuator\n",ch);     
                }
 
 if(isspace(ch)){
                printf("the data %c is space\n",ch);
                }else{
                printf("the data %c is not space\n",ch);     
                }                                
                
getch();
return 0;
}

