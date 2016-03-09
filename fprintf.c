#include <stdio.h>
#include <conio.h>

/*

fprintf(file_pointer, "format specifier", variable list); // to write into the file

    
*/

    int main()
    {
    
    FILE *Fpointer;
    char name[25];
    int age;
    printf("Key-in your name and age!");
    scanf("%s%d",name,&age);
    
    Fpointer = fopen("Rozita.txt","w");
    
    if(Fpointer == NULL){
                  printf("Unable to Create File!");
                
                }else{
                 
                 fprintf(Fpointer, "%s\t%d\n", name, age);
                 printf("Successfully written into the file!"); 
                 fclose(Fpointer);  
                      
                }
    getch();
    return 0;
    }
