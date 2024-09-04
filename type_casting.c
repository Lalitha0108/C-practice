#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Func(){
    int a=5,b=6;
    int div;
    div=(float)(b/a);//explicit conversion
    printf("%d",div);
}
int main(){
    Func();
    return 0;
}