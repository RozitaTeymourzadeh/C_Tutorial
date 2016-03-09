#include <stdio.h>
#include <conio.h>

/*

Create a temporary binary file and opens it in w+b mode

FILE *tmpfile();
        
*/

int main()
{
FILE *tmp;

char data[]= "Rozita is an Engineer";
int counter = -1;
int Length = strlen(data);

tmp = tmpfile();
if(tmp != NULL){
       
       puts("Temp File open successfully");      
       
       while (++counter < Length){
       fputc(data[counter],tmp);
      };
      
      rewind(tmp);
      
      while (!feof(tmp)){ 
      putchar(fgetc(tmp));
      };
       
}else{
          
       puts("Temp File failed to open");   
             
       };


getch();
return 0;
}
    
