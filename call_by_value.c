#include<stdio.h>
void func(int x,int y);
int main(){
    int a=10;
    int b=20;
    func(a,b);   //actual parameters

    printf("the values of a and b are: %d %d \n",a,b);
    return 0;
}
void func(int x,int y){    //formal parameters
    int t;
    t=x;
    x=y;
    y=t;

    printf("the values of x and y are: %d %d \n",x,y);
}
