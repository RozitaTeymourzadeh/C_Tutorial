#include <stdio.h>
#include <conio.h>

/*

struct  Pointer:
        
        struct student Rozita;
        struct student *ptr;
        ptr = &Rozita;
        printf("%s\t%d\n", ptr->name,ptr->no);

*/

struct student{
       char name[15];
       int no;
       };


    int main()
    {
    struct student Rozita;
    struct student *ptr;
    
    strcpy(Rozita.name,"Rozita");
    Rozita.no = 1234;
    
    ptr = &Rozita;
    
    printf("%s\t%d\n", Rozita.name,Rozita.no);
    printf("%s\t%d\n", ptr->name,ptr->no);
    


    getch();
    return 0;
    }
    
