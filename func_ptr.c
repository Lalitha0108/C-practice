#include<stdio.h>

void func(int a){
    printf("Entered value is %d...\n", a);
}

void main(){
    void (*p) (int) = &func;
    int a =10;
    (*p)(a);
}
