#include <stdio.h>
#include <conio.h>

/*

strcpy(destination, source); // to copy string from one source to a destination

    
*/

    int main()
    {
    char source[] = "Rozita Teymourzadeh" ;
    char destination[25];
    
    
    strcpy(destination,source);
    printf("%s\n",source);
    printf("%s\n",destination);
    
    getch();
    return 0;
    }
