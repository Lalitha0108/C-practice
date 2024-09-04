#include <stdio.h>

int main(){
    int elements[4][8] = {{1,3,5,7,9,11,13,15},{2,3,6,7,10,11,14,15},{4,5,6,7,12,13,14,15},{8,9,10,11,12,13,14,15}};
    int count =0;
    for(int i=0;i<4;i++){
        printf("elements[%d] elements are : \n",i);
        for(int j=0;j<3;j++){
            printf("%d\t",elements[i][j]);
        }
        printf("\n");
        for(int j=3;j<6;j++){
            printf("%d\t",elements[i][j]);
        }
        printf("\n");
        for(int j=6;j<8;j++){
            printf("%d\t",elements[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the response whether it is present in the box are not : \n");
    for(int i=0;i<4;i++){
        char result;
        printf("The number you imagened is present in box[%d] : ",i);
        scanf("%c",&result);
        getchar();
        if(result == 'Y' || result == 'y'){
            if(i == 0){
                count = count + 1;
            }else if(i == 1){
                count = count + 2;
            }else if(i == 2){
                count = count + 4;
            }else{
                count = count + 8;
            }
        }
    }
    printf("The imagened number is  : %d",count);
    
}