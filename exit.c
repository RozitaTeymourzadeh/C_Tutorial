#include <stdio.h>
#include <conio.h>
#include <math.h>


/*
To manually exit the program

int atexit(void(*func)(void));// in some certain register exit the program
void exit(int exit_code); //flash and exit
void _Exit(int exit_code);// exit without flash

*/

void onexit(){
     puts("Hi I am called before termination");
     getch();
     }
int main()
{
    int counter = 1;
    if(atexit(onexit)!=0){
                          puts("failed to register onexit as the termination function");
                          }
    while(1){
             printf("%d\n",counter);
             if(counter ==10){
                        exit(0);
                        //_Exit(0);
                        }
             counter++;
             }

return 0;
}

