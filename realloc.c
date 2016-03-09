#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*

Heap : (Dynamic Memory)can be activated by pointer

realloc: To increase or decrease of allocated memory
        void *realloc(current_storage_pointer,new_size);
        void free();

*/
    

int main()
{
char *str;
str = (char*)malloc(13);

if (str == NULL){
        puts("Wrong memory allocation !");
        }else{
        puts("Memory allocation is conducted successfuly!!");
        strcpy(str,"Rozita teymou");
        puts(str);
        
        str = (char*)realloc(str,19);
        strcat(str, "rzadeh"); 
        puts(str);
        free(str);
        };

getch();
return 0;
}
    
