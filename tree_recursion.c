#include<stdio.h>
int  func(int n){
    if(n<=1){
        return 1;
    }
    int res=func(n-1)+func(n-2);  //tree recursion
    return res;
}
int main(){
    int n=func(3);
    printf("fibonacci  is %d:\n",n );
    return 0;
}