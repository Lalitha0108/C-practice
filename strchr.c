#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello world";
    char ch='o';

    char *result=strchr(str,ch);
    if(result!=NULL){
        printf("character found at %s",result);

    }
    else{
        printf("character not found");
    }
    return 0;
}