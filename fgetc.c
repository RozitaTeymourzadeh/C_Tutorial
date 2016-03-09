#include <stdio.h>
#include <conio.h>

/*

fgetc(file_pointer); // to read character from the file

    
*/

    int main()
    {
    
    FILE *Fpointer;
    char ch;
    
    Fpointer = fopen("Rozita.txt","r");
    
    if(Fpointer == NULL){
                  printf("Unable to Create File!");
                
                }else{
                 
                while(!feof(Fpointer)) {
                               
                               ch = fgetc(Fpointer);
                               printf("%c",ch); 
                               }
                 
                 fclose(Fpointer);  
                      
                }
    getch();
    return 0;
    }
