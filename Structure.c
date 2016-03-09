#include <stdio.h>
#include <conio.h>

/*

struct tag_name {
       
       member1;
       member2; 
       };
    
*/

struct student {
       char name[15];
       int rollno;
       int age;
      };


    int main()
    {

struct student Rozita = {
       
       "Rozita",
       1234,
       34  
       };
       
printf("%s %d %d",Rozita.name,Rozita.rollno,Rozita.age);
    
    getch();
    return 0;
    }
