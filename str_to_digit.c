/*
* int str_to_digit(char* str)
* Function to convert string to integer number
* @ input: char* str
* @ output: int 
* 
*/
#include <stdio.h>
#include <string.h> 
  
int str_to_digit(char* str) 

{ 

    int len = strlen(str);
    printf("len is %d\n",len);
    unsigned int unsigned_max = 10;
    unsigned int signed_max = 11;
    int result = 0; 
    int sign = 1; 
    int i = 0; 

    if (str[0] == '-') { 
        sign = -1; 
    } 
  
    if((len >= unsigned_max && sign == 1) || (len >= signed_max && sign == -1)) {
        printf(" The value is too large to be converted, choose the smaller number!\n");
        return -1;
    }
  
    for (; str[i] != '\0'; ++i) 
        result = result * 10 + str[i] - '0'; 

    return sign * result; 
} 
  
// Driver program to test above function 
int main() 
{ 
    char str[] = "4294967296"; 
    int result = str_to_digit(str); 
    printf("%d\n ", result); 
    char str1[] = "-21474836499"; 
    int result1 = str_to_digit(str1); 
    printf("%d\n", result1); 
    return 0; 
}
