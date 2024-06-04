#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
typedef struct str1{ 
    int a;  //4
    // char b; //1
    char c; //1
    int d;  //4
    char b;
}str1;
int main(){
    printf("size of struct is: %ld \n",sizeof(str1));
}

