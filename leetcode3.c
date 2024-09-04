#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char *str="Hello World";
    int count=0;

    int len=strlen(str);
    int i=len-1;

    for(i;str[i]!=' ';i--);
    str=&str[++i];
   
    printf("%s \n",str);
    printf("%ld",strlen(str));

    return 0;
}