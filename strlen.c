#include <stdio.h>
#include <conio.h>

/*

int strlen(string); // to find length of the string

    
*/

    int main()
    {
    char name[] = {'R','O','Z','I','T','A','\0'} ;
    char family[] = "Teymourzadeh";
    int Length;
    int Length2;
    
    Length = strlen(name);
    Length2 = strlen(family);
    
    printf(" the length is %d\n",Length);
    printf(" the length2 is %d\n",Length2);
    
    getch();
    return 0;
    }
