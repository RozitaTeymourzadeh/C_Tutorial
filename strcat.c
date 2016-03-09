#include <stdio.h>
#include <conio.h>

/*

strcat(destination, source); // to add or append string from one source to a destination

    
*/

    int main()
    {
    char name[] = "Rozita " ;
    char fullname[] = "Teymourzadeh" ;
    char destination[25];
    
    
    strcat(name,fullname);
    printf("%s\n",name);
    
    getch();
    return 0;
    }
