#include <stdio.h>
#include <conio.h>

/*

union and function

*/
union data{
       char string[50];
       int x; 
      };

void display (union data b){
     
     printf("%s\n",b.string);
     
     };// Pass Variable
     
void displayPointer (union data *b){
     
     printf("%s\n",b->string);
     
     };// Pass pointer ..
     
     
     

int main()
{

union data Rozita; 
strcpy(Rozita.string,"Rozita is Engineering!");  
display (Rozita);
displayPointer (&Rozita);


getch();
return 0;
}
    
