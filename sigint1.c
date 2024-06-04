#include<stdio.h>
#include<signal.h>
void signal_int(int sig){     //user defined signal
    printf("signal caught %d \n",sig);
}
int main(){
    // while(1)
    signal(SIGQUIT, signal_int);
    while(1);
    {
        printf("hello world");
    }
    return 0;
}
