#include <stdio.h>
#include <conio.h>

/*

Define few structs:
       
struct tag_name {
       
       member1;
       member2; 
       };
    
*/

struct student {
       char name[15];
       int rollno;
       int age;
      }Anita,Pantea;


    int main()
    {
    struct student Eliza = {0};
    struct student Pantea = {0};
    Eliza = Pantea; // In struct we can copy as this example
    
    struct student Rozita = {
       "Rozita",
       33,
       34
      };

    strcpy (Anita.name,Rozita.name); // for copy the each individual member, we need to use strcpy
    puts(Anita.name);
    
    getch();
    return 0;
    }
