#include<stdio.h> 
#include<signal.h> 
#include<unistd.h>
void handle_sigint(){
    printf("this is signal interrupt message");

}
  
int main() 
{ 
    signal(SIGINT, handle_sigint); 
    while (1) 
    { 
        printf("hello world\n"); 
        sleep(1); 
    } 
    return 0; 
} 

