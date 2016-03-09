#include <stdio.h>
#include <conio.h>

/*

typedef struct or union
       typedef  struct_or_union{
                
                type member1;
                type member 2;
                ...
                
                }type_id;

*/

     
     
     

int main()
{
    
    typedef struct{
            int age;
            char name[15];
            
            }person;
            

 person Rozita;
 
 Rozita.age = 34;
 strcpy(Rozita.name,"Rozita");
 
 printf("%s\t%d\n",Rozita.name,Rozita.age);
 

getch();
return 0;
}
    
