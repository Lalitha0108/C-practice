#include<stdio.h>
#include<stdlib.h>
int Func(int n){
    if(n==0){
        return 0;
    }
    int res= n+ Func(n-1);
    return res;
}
int main(){
    int n=5;

    int sum=Func(n);
    printf("sum of element %d \n",sum);

    return 0;
}
