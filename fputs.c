#include <stdio.h>
#include <conio.h>

/*

fputs(string, file_pointer); // Write string into the file

    
*/

    int main()
    {
    
    FILE *Fpointer;
    char input[50];

    
    Fpointer = fopen("Rozita.txt","w");
    
    if(Fpointer == NULL){
                  printf("Unable to Create File!");
                
                }else{
                 
                 printf("Key-in input from Keyboard to be written into the file\n");     
                 gets(input);
                 fputs(input, Fpointer);    
                 printf("Successfully written into the file!"); 
                 fclose(Fpointer);  
                      
                }
    getch();
    return 0;
    }
