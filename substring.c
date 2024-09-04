#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="ruballber";
    char str2[]="ball";
    int found=0;
    char i,j;
    int len1=strlen(str1);
    int len2=strlen(str2);

    for(i=0;str1[i]!='\0';i++){
        for(j=0;str2[j]!='\0';j++){
            if(str1[i+j]!=str2[j]){
                break;
            }
        }
        if(j==len2){
            found=1;
            break;
        }
        
    }
    if(found==1){
        printf("substring found");
    }
    else{
        printf("substring not found");
    }
    return 0;

}
