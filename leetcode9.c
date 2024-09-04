#include <stdio.h>    //REVERSE INTEGER Leetcode:-7
#include <limits.h> 

void reverse(int x) {
    int reversed = 0;
    int flag=0;
    while (x != 0) {
        int remainder = x % 10;
        x=x/10;
        
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && remainder > 7)) {
            flag=1;
            break; // Overflow
        }
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && remainder < -8)) {
            flag=1;
            break; // Underflow
        }
        reversed = reversed * 10 + remainder;
    }
    if(flag==1){
        printf("number is either overflow or under flow");
    }else{
        printf("%d",reversed);
    }
    
}

int main() {
    int x;
    printf("enter number:");
    scanf("%d",&x);
   
    reverse(x);
    return 0;
}
