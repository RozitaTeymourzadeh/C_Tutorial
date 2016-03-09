#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

/*
double difftime(time_t time2, time_t time1);
clock_t clock(void);
CLOCKS_PER_SEC
*/

void display(){
     
     printf("Elapsed time is %u per seconds\n",clock()/CLOCKS_PER_SEC);
     }

int main()
{
//Exp 1
time_t start,end;
double output;
int i;

start = time(NULL);
for (i = 0;i<100000000;i++)
end = time(NULL);

output = difftime(start,end);

printf("The time difference is %f seconds\n");

//EXP 2

getch();
display();

getch();
return 0;
}

