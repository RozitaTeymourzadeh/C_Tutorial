#include <stdio.h>
#include <conio.h>

/*

union vs structure

*/

int main()
{
    
struct Person{
       int age;
       char name[6];
       float height;    
       };
       
union student{
       int age;
       char name[6];
       float height;  
      };
      
      printf("%d\n", sizeof(struct Person));
      printf("%d\n", sizeof(union student));


getch();
return 0;
}
    
