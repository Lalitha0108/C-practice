#include<stdio.h>
#include<string.h>
int main(){
    char buffer[10];
    memset(buffer,21,sizeof(buffer));

    for(int i=0;i<sizeof(buffer);i++){
        printf("%d \n",buffer[i]);
    }
}
21 
21 
21 
21 
21 
21 
21 
21 
21 
21 
