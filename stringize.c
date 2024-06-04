#include<stdio.h>
#define str(x) #x
int main(){
    int value=10;
    char* name="ALICE";

    printf("value: %s \n",str(value));
    printf("name: %s \n",str(value));

    return 0;
    
}
