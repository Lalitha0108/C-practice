#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct func1{
    int a;
    char b;
    union{
        float c;
        int d;
    }var1;
}var2;
int main(){
    printf("sizeof struct is: %ld \n:",sizeof(var2));
    printf("sizeof union is: %ld \n:",sizeof(var2.var1));
    
    return 0;


}