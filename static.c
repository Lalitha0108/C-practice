#include<stdio.h>
void staticstorage() 
{ 
    int i = 0; 
  
    printf("\nDemonstrating static class\n\n"); 

    for (i = 1; i < 5; i++) { 
  
        // Declaring the static variable 'y' 
        static int y = 5; 
  
        // Declare a non-static variable 'p' 
        int p = 10; 
  
        // Incrementing the value of y and p by 1 
        y++; 
        p++; 
  
        // printing value of y at each iteration 
        printf("\nThe value of 'y', "
               "declared as static, in %d "
               "iteration is %d\n", 
               i, y); 
  
        // printing value of p at each iteration 
        printf("The value of non-static variable 'p', "
               "in %d iteration is %d\n", 
               i, p); 
    } 
} 
int main(){
    staticstorage();

    return 0;

}