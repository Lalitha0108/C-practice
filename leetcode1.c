#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str1[]="leetcode";
    char str2[]="leet";

    char *result=strstr(str1,str2);
    result=strstr(str1,str2);

    printf("%s\n", result);
    if(result!=NULL){
        printf("element found");
    }
    else{
        printf("substring not found");
    }
    return 0;

}