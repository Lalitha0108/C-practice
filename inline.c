#include<stdio.h>
static inline int func1(int x,int y){
    int sum=x+y;
    printf("%d",sum);
    return sum;
}
int main(){
    int a=10;
    int b=4;
    int res;
    res=func1(a,b);

    return 0;

}
