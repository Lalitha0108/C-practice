#include<stdio.h>
void add(int a, int b){
    // int a=10;
    // int b=5;
    printf("Addition is: %d",a+b);

}
void sub(int a, int b){
    // int a=10;
    // int b=5;
    printf("Addition is: %d",a-b);

}
void mul(int a, int b){
    // int a=10;
    // int b=5;
    printf("Addition is: %d",a*b);

}
int main(){
    void(*p[])(int , int)={add,sub,mul};
    int a=10;
    int b=5;

    (*p)(a,b);
    (*(p+1))(a,b);
    (*(p+2))(a,b);

    return 0;


}
