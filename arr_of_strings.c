#include<stdio.h>
#include<string.h>
int main(){
    char str[6][7]={{"pig"},{"cat"},{"dog"},{"cow"},{"tiger"}};

    int size=sizeof(str)/sizeof(str[0]);
    char temp[50];

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%s \n",str[i]);

    }
    return 0;
}