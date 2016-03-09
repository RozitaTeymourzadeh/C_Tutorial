#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

/*
time_t mktime(struct tm *time);
*/

int main()
{
struct tm t;
time_t MKoutput;

t.tm_year = 2016 - 1900;
t.tm_mon = 1;
t.tm_mday = 20;
          
t.tm_hour = 0;
t.tm_min = 0;
t.tm_sec = 0;
t.tm_isdst = 0;

MKoutput = mktime(&t);
printf(ctime(&MKoutput));

getch();
return 0;
}
