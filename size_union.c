#include<stdio.h>
union test1{
    int a;
    char b;
    float c;
    int d;
}Test;
int main(){
    int size=sizeof(Test);

    printf("size of test1: %d",size);

    return 0;
}