#include <stdio.h>
#include <conio.h>

/*

fscanf(file_pointer, "format specifier", variable list); // to read input from the file

    
*/

    int main()
    {
    
    FILE *Fpointer;
    char data[25];
    int age;
    
    Fpointer = fopen("Rozita.txt","r");
    
    if(Fpointer == NULL){
                  printf("Unable to Create File!");
                
                }else{
                 
                 fscanf(Fpointer, "%s\t%d\n", data,&age);
                 printf("%s\t%d\n", data,age); 
                 fclose(Fpointer);  
                      
                }
    getch();
    return 0;
    }
