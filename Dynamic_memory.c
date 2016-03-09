#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*

Heap : (Dynamic Memory)can be activated by pointer

malloc: Allocate Dynamic memory on Heap
        void *malloc(no_of_bytes);
        void free(current_storage_pointer);

*/
    

int main()
{
//Exp 1:
int *p;
p = (int*)malloc(sizeof(int));// do Not forget to cast malloc!
if (p == NULL){
      
      puts("Wrong Dynamic allocation");
      
      }else{           
      puts("Right Dynamic allocation");
      *p = 20;
      printf("%d\n",*p);  
      free(p);
      };
      
      
//Exp 2:      
  
char *q;
int length;
puts("Enter the length of string tha you wan to save:");
scanf("%d",&length);
q = (char*)malloc(sizeof(char)*length+1);// do Not forget to cast malloc!
if (p == NULL){
      
      puts("Wrong Dynamic allocation");
      }else{           
      puts("Right Dynamic allocation");
      fflush(stdin);
      puts("Entre the String:");
      gets(q);
      puts(q);
      free(q);
      };  
  
  
      
       
           
 

getch();
return 0;
}
    
