#include <stdio.h>
#include <conio.h>
#include <time.h>

/*

time_t time(time_t *time);
struct tm *localtime(const time_t *time);
struct tm *gmtime(const time_t *time);

Look at dev_cpp /include/time.h to get the struct member

*/

int main()
{

struct tm *local,*gm;
time_t t;

t= time(NULL);
local = localtime(&t);
printf("Local time using Local time function\n");
printf("time --> %d: %d: %d\n", local->tm_hour, local->tm_min,local->tm_sec);
printf("date --> %d / %d / %d\n", local->tm_year+1900, local->tm_mon+1,local->tm_mday);
printf("This is the %d day of this year\n", local->tm_yday+1);
printf("This is the %d day of this week\n\n", local->tm_wday);

gm = gmtime(&t);
printf("UTC (Greenwitch)time using GM time function\n");
printf("time --> %d: %d: %d\n", gm->tm_hour, gm->tm_min,gm->tm_sec);
printf("date --> %d / %d / %d\n", gm->tm_year+1900, gm->tm_mon+1,gm->tm_mday);
printf("This is the %d day of this year\n", gm->tm_yday+1);
printf("This is the %d day of this week\n", gm->tm_wday);

getch();
return 0;
}
    
