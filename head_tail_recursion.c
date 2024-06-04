#include<stdio.h>
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        int res=n * fact(n-1);   //tail recursion
    }
}
int main(){
    int n=5;

    int fact1=fact(n);
    printf("factorial of n is:%d",fact1);
    return 0;
}
