/*
* int str_to_digit(char* str)
* Function to convert string to integer number
* @ input: char* str
* @ output: int 
* 
*/
#include <stdio.h> 
  
int str_to_digit(char* str) 
{ 
    int result = 0; 
    int sign = 1; 
    int i = 0; 
  
    if (str[0] == '-') { 
        sign = -1; 
        i++; 
    } 
  
    for (; str[i] != '\0'; ++i) 
        result = result * 10 + str[i] - '0'; 
    return sign * result; 
} 
  
// Driver program to test above function 
int main() 
{ 
    char str[] = "123999999999999999999999999999999999999999999"; 
    int result = str_to_digit(str); 
    printf("%d ", result); 
    char str1[] = "-4"; 
    int result1 = str_to_digit(str1); 
    printf("%d ", result1); 
    return 0; 
}
