#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*

Heap : (Dynamic Memory)can be activated by pointer

calloc: Allocate Dynamic memory on Heap
        void *calloc(no_of_items,size_of_each_item);
        void free(current_storage_pointer);

*/
    

int main()
{
int *mark,counter,length;
puts("Entre the number of subjects");
scanf("%d",&length);

mark = (int*)calloc(length,sizeof(int));

if (mark == NULL){
         puts("Fail to allocate memory");
         }else
         {
         puts("memory alocated sucessfully! ");
         for(counter=0;counter<length;counter++)
         {
         printf("key-in the mark of %d subject:", counter+1);
         scanf("%d",&mark[counter]);
         }
         for(counter=0;counter<length;counter++)
         {
         printf("%d\n",mark[counter]);
         }                            
         }
         free(mark);
getch();
return 0;
}
    
