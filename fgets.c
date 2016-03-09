#include <stdio.h>
#include <conio.h>

/*

fgets(variable_to_store,length, file_pointer); // to get strig from the file 
    
*/

    int main()
    {
    
    FILE *Fpointer;
    char data[25];
    
    Fpointer = fopen("Rozita.txt","r");
    
    if(Fpointer == NULL){
                  printf("Unable to Create File!");
                
                }else{
                 
                 while(!feof(Fpointer)){
                                       
                            fgets(data,25,Fpointer);
                            printf("The character read from the file is %s\n",data);           
                 }             
                 fclose(Fpointer);  
                      
                }
    getch();
    return 0;
    }
