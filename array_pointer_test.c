#include <stdio.h>
 

int main ()
{
    int aff[4];
    int i = 0;
    while (i<4){
        
        aff[i]=i;
        i++;
        
        
    }
    int* pt = aff;
    
   printf("%d\n ",pt);
   printf("%d\n",&aff);
   printf("%d\n",&aff[0]);
}