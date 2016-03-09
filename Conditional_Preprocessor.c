    #include <stdio.h>
    #include <conio.h>
    
    /*
    
    #if      #else    #elif     #endif
    
    */
    
    
    #define MARK 30
    
    int main()
    {
    
    #if MARK > 90
    
        printf("Your Grade is A");
        
    #elif MARK > 30
    
        printf("Your Grade is B");
    
    #else
    
       printf("Your Grade is C");
         
    #endif
    getch();
    return 0;
    
    }
