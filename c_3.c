#include<stdio.h>
int main(){
    int y=0;
    int m;

    for(int i=0;i<10;i++){
        scanf("%d",&m);
        if(y<m){
            y=m;
        }

    }
    printf("%d \n",y);
    return 0;
}