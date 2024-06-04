#include<stdio.h>
#define val 10
#pragma pack(1)
#if(val==10)
   #define error_msg 20
#endif

#ifndef error_msg
   #error error msg not found
#endif
typedef struct var{
    int a;
    char b;
    char c;
    float d;

}var;
int len=sizeof(var);

int main(){
    int a=10;
    int b=5;
    
    int sum=a+b;
    
    // printf("%d \n",sum);

    printf("size of struct: %ld \n",sizeof(var));

}

#undef val

