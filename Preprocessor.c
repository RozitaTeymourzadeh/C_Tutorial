    #include <stdio.h>
    #include <conio.h>
    
    // #define macro_name character_sequence
    
    #define LIMIT 10
    #define TOP (LIMIT+1)
    #define NAME "Rozita"
    
    
    int main()
    {
      
    int counter;
    printf("%s\n",NAME);
    for(counter =1; counter < TOP; counter++){
                
                printf("%d\n",counter);
                
                }  
    getch();
    return 0;
    
    }
    
