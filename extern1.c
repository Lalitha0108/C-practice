#include<stdio.h>
#include "extern2.h"

int ext_var;

void externstorage1() 
{ 
  
    printf("\nDemonstrating extern class\n\n"); 
  
    printf("Initial extern - 1 : %d\n", ext_var); 
    ext_var = 2; 
    printf("Initial extern - 2 : %d\n", ext_var); 
    ext_var = 5;
  
}
int main(){
    externstorage1();
    externstorage2();

    return 0;
}
