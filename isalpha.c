#include <stdio.h>
#include <conio.h>
#include <ctype.h>


/*
int isalnum(int ch); return 0 if non-charecter or digit and return non-zero if charecter or digit key in
int isalpha(int ch); return 0 if non-character and return non-zero if charecter key in
int isdigit(int ch); return 0 if non-nondigit and return non-zero if digit key in

*/


int main()
{

char ch;

printf("Key in a character:");
gets(&ch);

if(isalpha(ch)){
                printf("the data %c is alphabet\n",ch);
                }else{
                printf("the data %c is not alphabet\n",ch);     
                }
 
 if(isdigit(ch)){
                printf("the data %c is digit\n",ch);
                }else{
                printf("the data %c is not digit\n",ch);     
                }               
 if(isalnum(ch)){
                printf("the data %c is digit or alphabet\n",ch);
                }else{
                printf("the data %c is not digit or alphabet\n",ch);     
                }                   
                
getch();
return 0;
}

