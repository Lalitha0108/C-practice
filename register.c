#include<stdio.h>
void registerstorage() 
{ 
  
    printf("\nDemonstrating register class\n\n"); 
  
    // declaring a register variable 
    register char b = 'G'; 
  
    // printing the register variable 'b' 
    printf("Value of the variable 'b'"
           " declared as register: %c\n", 
           b); 
} 
int main(){
    registerstorage();

    return 0;

}
  Demonstrating register class

Value of the variable 'b' declared as register: G
