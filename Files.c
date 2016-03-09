#include <stdio.h>
#include <conio.h>
    
    /*
    
      fopen("File_name.txt","mode"); // create or open file 
      mode = r, w, a
      
      fputc(character, file_pointer); // Write charecter into the file
    
    */
    
    int main()
    {
    
    FILE *Fpointer;
    char data[50]= "Rozita Teymourzadeh Nima Rostami";
    int length = strlen(data);
    int counter;
    
    Fpointer = fopen("Rozita.txt","a");
    
    if(Fpointer == NULL){
                  printf("Unable to Create File!");
                
                }else{
                      
                 for(counter = 0; counter < length; counter++){
                             
                 printf("Writing Character %c\n", data[counter]);
                            fputc(data[counter], Fpointer); 
                             
                             }     
                  printf("Successfully created!"); 
                  fclose(Fpointer);  
                      
                }
    getch();
    return 0;
    
    }
