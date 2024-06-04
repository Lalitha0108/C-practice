#include<stdio.h>
// int fact1(int);
int fact(int n){
    static int f = 1;
    if(n == 1) return 1;
    f = n * fact(n-1);      // Recursion means calling a function from that function itself
        //   fact1(4);                  //  Here fact() is called inside fact() itself
    return f;
}
// int fact1(int n){
//     n=fact(n);
//     printf("fact of %d \n",n);
// }

void main(){
    int a = 5;
    printf("Fact of %d is %d\n", a, fact(a));
}
/*
n       f
5       1       120       
5       5*24    120
4       4*6     24
3       3*2     6
2       2*1     2
1       1
*/
