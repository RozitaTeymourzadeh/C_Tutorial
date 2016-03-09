#include <stdio.h>
#include <conio.h>

/*


struct tag_name {
       
       member1;
       member2; 
       struct address;
       
       };
    
*/

struct address{
       char ave[15];
       int no;
       };

struct student {
       char name[15];
       int rollno;
       struct address addr;
      };


    int main()
    {

    struct student Rozita;
    strcpy(Rozita.name,"Rozita");
    Rozita.rollno = 1234;
    strcpy(Rozita.addr.ave,"Stockholm");
    Rozita.addr.no = 68;
    
    printf("%s\t%d\t%s\t%d", Rozita.name,Rozita.rollno,Rozita.addr.ave,Rozita.addr.no);


    
    getch();
    return 0;
    }
