#include <stdio.h>
#include <conio.h>

/*

Rename File:
        
        int rename(old_file_name, new_file_name);
        --> return zero if successful
        --> return nonzero if fail
        
*/

int main()
{

if(rename("Rozita.txt","Anita.txt")==0){
printf("File name has changed successfully!");
// we can use puts("") instead printf("")
}
else
{
printf("File name has NOT changed!");
// we can use puts("") instead printf("")
};

getch();
return 0;
}
    

