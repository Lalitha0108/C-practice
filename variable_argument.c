#include<stdio.h>
#include<stdarg.h>
 
void vlaFN(int cnt, ...){
    int arr[cnt];
    va_list olst, clst;
    va_start(olst, cnt);
    va_copy(clst, olst);
    for(int i=0; i<cnt; i++){
        arr[i] = va_arg(clst, int);
    }
    for(int i=0; i<cnt; i++){
        printf("%d\t", arr[i]);
    }
    va_end(olst);
    va_end(clst);
}
 
void main(){
    vlaFN(5, 10, 15, 13, 17, 19);
    printf("\n");
}