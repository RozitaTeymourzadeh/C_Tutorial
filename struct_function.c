#include <stdio.h>
#include <conio.h>

/*

struct  in Function:
        
        void show (struct student s)
        show(Rozita);

*/

struct student{
       char name[15];
       int no;
       };

void display(char[], int);
void show(struct student);
    int main()
    {

    struct student Rozita;
    strcpy(Rozita.name,"Rozita");
    Rozita.no = 1234;

    display(Rozita.name,Rozita.no);
    show(Rozita);

    getch();
    return 0;
    }
    
void display(char n[], int r){
     
     printf("In display function\n");
     printf("%s\t%d\n",n,r);
     
     }
void show (struct student s){
     
     printf("\n\nIn show function\n");
     printf("%s\t%d\n",s.name,s.no);
     
     }
