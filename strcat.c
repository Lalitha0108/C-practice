#include<stdio.h>
#include<string.h>
int main(){
    char dest[40]="this is an";
    char source[40]=" example";

    printf("before concatination: %s",dest);

    strcat(dest,source);

    printf("\n after concatenation: %s \n",dest);


    return 0;


}