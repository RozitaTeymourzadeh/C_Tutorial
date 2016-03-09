#include <stdio.h>
#include <conio.h>
#include <time.h>

/*

size_t strftime(char *str,size_t maxsize, const chart *fmt, const struct tm *time)

%A Full weekday name
%B Full month name
%C standard date and time
%H Hour (0-23)
%I hour (1-12)
%p Local's equivalent of AM or PM
%M minute as decimal
%S Second as Decimal
%X Standard time string
%Z Time zone name

*/

int main()
{
struct tm *ptr;
time_t t;
char str[100];

t = time(NULL);
ptr = localtime(&t);
strftime(str,100,"it is now %I %p %M minutes %S seconds\n time zone is %Z", ptr);
puts(str);


getch();
return 0;
}
