#include <stdio.h>
#include <conio.h>
#include <string.h>


/*

It is used to compare character between str1 and str2
int memcmp(const void *str1,const void *str2,size_t count);
if return value is 
   < 0 str1 is less than str2
   = 0 str1 is equal to str2
   > 0 str1 is greater than str2
*/


int main()
{
int length,len1,len2,result;
char str1[] = "Teymour";
char str2[] = "eymourzadeh";

len1 = strlen(str1);
len2 = strlen(str2);

length = len1 <= len2 ? len1:len2;

result = memcmp(str1,str2,length);

if(result == 0){
          
          printf("all the character of %s are equal to %s \n", str1,str2);
          
          }else{
                
          printf("%d the character of %s are equal to %s \n", result,str1,str2);      
                };

getch();
return 0;
}

