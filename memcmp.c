#include<stdio.h>
#include<string.h>
int main(){
    char str[]="watermelon";
    char str1[]="muskmelon";
    char result=memcmp(str,str1,4);

    if(result==0){
        printf("the first n bytes are equal %d",result);
    }
    else{
        printf("the first n bytes are not equal %d",result);
    }
}
O/P:-
  the first n bytes are not equal 10
