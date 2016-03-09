#include <stdio.h>
#include <conio.h>

/*

This Function take data from keyboard and save it is name[] array   
gets(name);  take space
scanf("%s",name); doesnot take space

    
*/


int main()
{
  char name[20]; 
  //scanf("%s",name);
  gets(name);
  printf("%s",name);
    
getch();
return 0;

}

