#include<stdio.h>
void func(int*,int*);
int main(){
    int a=10;
    int b=20;
    func(&a,&b);
    printf("the values of a and b are: %d %d \n",a,b);
    return 0;
}
void func(int* x,int* y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("the values of x and y are: %d %d \n",*x,*y);

}
