#include<stdio.h>
#include<stdlib.h>
void Func(int num){
    if(num & 1){
        printf("number is odd %d",num);
    }
    else{
         printf("number is even %d",num);

    }
//     printf("number is even %d",num);
 }
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);

    Func(num);
    return 0;
}
//LSB IS 0:-EVEN
//LSB IS 1:-ODD
