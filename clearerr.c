#include <stdio.h>
#include <conio.h>

/*

int ferror(FILE *fp);
void clearerr(FILE *fp);
        
*/

int main()
{
char data[25] = "Rozita is an Engineer";
FILE *fp;
int status;

fp = fopen("Rozita.txt","r");
if (fp != NULL){
       puts("File open successfully");
       
       fprintf(fp,"%s",data);
       
       status = ferror(fp);
       printf("%d\n",status);
       
       clearerr(fp);
       
       status = ferror(fp);
       printf("%d\n",status);
       
       if(status!=0){
                         puts("data can not be transferred into the file");
                         }else{
                         puts("data transferred into the file successfully!");        
                         };
       
       }else{
                  
       puts("File failed to open");    
             };

getch();
return 0;
}
    
