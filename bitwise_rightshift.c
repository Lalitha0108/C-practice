#include<stdio.h>
int main(){
    int a=4;
    int n=3;
   
   int l=(a>>(n-1))&1;
   printf("%d \n",l);
}