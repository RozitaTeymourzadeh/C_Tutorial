#include <stdio.h>
#include <conio.h>

/*

Remove File:
        
        int remove(file_name);
        --> return zero if successful
        --> return nonzero if fail
        
*/

int main()
{

if(remove("Anita.txt")==0){
printf("File name has removed successfully!");
// we can use puts("") instead printf("")
// if the file is in Rozita path folder we need to define path:
// remove("Rozita/Anita.txt");
}
else
{
printf("File name has NOT removed!");
// we can use puts("") instead printf("")
};

getch();
return 0;
}
    
