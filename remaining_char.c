#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[100];
    printf("enter string:");
    scanf("%s",&str[0]);
    // fgets(str, sizeof(str), stdin); 
    for(int i=0;str[i]!='\0';i++){
        if(!(str[i]>='A' && str[i]<='Z') && !(str[i]>='a' && str[i]<='z')){
           printf("the non alphabet cahracters are:%c \n",str[i]);
           

        }
    }
    printf("the string is : %s",str);
    return 0;
}
O/P:-
enter string:lalli@#23
the non alphabet cahracters are:@ 
the non alphabet cahracters are:# 
the non alphabet cahracters are:2 
the non alphabet cahracters are:3  
