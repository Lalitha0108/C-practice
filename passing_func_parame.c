#include<stdio.h>
void add(int a,int b){
    printf("Addition is:%d",a+b);
}

void func1(void (*func2)()){
    func2();
}
int main(){
    func1(add);
    return 0;
}
