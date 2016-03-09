  #include <stdio.h>
    #include <conio.h>
    
    /*
    
    #ifdef      #ifndef    #undef
    #ifdef macro_name
           statement;
    #endif
    
    */
    
    
    #define INTEL
    #undef INTEL
    
    int main()
    {
    
    #ifndef INTEL
    
    printf("INTEL is not defined");
    
    #endif
    
    getch();
    return 0;
    
    }
