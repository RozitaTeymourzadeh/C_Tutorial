#include <stdio.h>
#include <stdlib.h>
/*

Preprocessor to read source code
 
*/



int main(){
    
    FILE *fp;
    char ch;
    
    fp = fopen(__FILE__,"r");
    
    if (fp == NULL){
           puts("Failed to open the file");
           }else{
           puts("File is open now!");
           do{
                      ch = fgetc(fp);
                      putchar(ch);
                      
                      }while(ch != EOF);
           
           fclose(fp);
                }
    
    getch();
    return 0;
    }
