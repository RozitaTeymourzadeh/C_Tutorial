#include <stdio.h>
#include <conio.h>

/*

To reset the file pointer into the begining of the file

void rewind(FILE *fp);
        
*/

int main()
{
FILE *fp;

fp = fopen("Rozita.txt","r");

while (!feof(fp)){
      putchar(fgetc(fp));
      };

puts("\n");
rewind(fp);

while (!feof(fp)){
      putchar(fgetc(fp));
      };

getch();
return 0;
}
    
