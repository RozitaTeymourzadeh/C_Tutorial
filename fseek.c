#include <stdio.h>
#include <conio.h>

/*

fseek: to move curcour in proper place
        
        fseek(fPointer, Size to move, SEEK_SET/SEEK_END);
        show(Rozita);

*/


int main()
{
FILE *fPointer;

fPointer = fopen("Rozita.txt","w+");
fputs("Anita BBB Teymourzadeh",fPointer);

fseek(fPointer, 6, SEEK_SET);
fputs("& Rozita",fPointer);

fseek(fPointer, -8, SEEK_END);
fputs(" & Panteha ",fPointer);

rewind(fPointer);

while (!feof(fPointer)){
      putchar(fgetc(fPointer));
      };

getch();
return 0;
}
    
