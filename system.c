#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


/*

int system(const char *str);
    return 0 == if command executed successfully
    returns nonzero 00 error while executing the command

*/


int main()
{

if (system(NULL)!= 0){
                   
                   system("dir");
                   system("echo Rozita Teymourzadeh");
                   }else{
                         
                   puts("Command processor is not present in your OS");      
                         }

getch();    
return 0;
}

