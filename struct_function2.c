#include <stdio.h>
#include <conio.h>

/*

struct  function with Pointer:
        
        struct student Rozita;
        display (&Rozita);
        
        void display (struct student *ptr){
        printf("%s\t%d\n",ptr->name,ptr->no);
        };

*/

struct student{
       char name[15];
       int no;
       };

void display (struct student *);
    int main()
    {
    struct student Rozita = {
           "Rozita",
           1234
           };
           
    display (&Rozita);       
           
    getch();
    return 0;
    }
    
void display (struct student *ptr){
     
     printf("%s\t%d\n",ptr->name,ptr->no);
     
     };
