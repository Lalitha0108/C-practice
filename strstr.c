#include<stdio.h>
#include<string.h>
int main(){
    char str[]="This is a test number test 1";
    char str1[]="test";

    char *result=strstr(str,str1);
    result=strstr(result+1,str1);
    // result=strstr(result+1,str1);
    printf("%s\n", result);
    if(result!=NULL){
        printf("elemsnt found");
    }
    else{
        printf("substring not found");
    }
    return 0;
}