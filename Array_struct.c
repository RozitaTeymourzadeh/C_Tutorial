#include <stdio.h>
#include <conio.h>

/*

struct tag_name {
       
       member1;
       member2; 
       struct address;
       }; 
       
struct tag_name array[size]; 
*/

struct student{
       char name[15];
       int no;
       };

    int main()
    {
    int size = 3;
    struct student s[size];
    int counter;
    
    for(counter =0;counter < size; counter++){
              printf("Enter the no. of student %d\n",counter+1);
              scanf("%s%d",&s[counter].name,&s[counter].no);     
                };
                printf("\n\n");
    for(counter =0;counter < size; counter++){
              printf("name %s\t no %d\n",s[counter].name,s[counter].no);
                };
 
    getch();
    return 0;
    }
