#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="geeks";
    char str2[]="for";

    int result1=strcmp(str1,str2);

    printf("compare the strings: %d",result1);

    return 0;
}