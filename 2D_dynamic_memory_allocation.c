#include<stdio.h>
#include<stdlib.h>
int main(){
    int rows;
    int cols;
    printf("enter no.of rows:");
    scanf("%d",&rows);
    printf("enter no.of cols:");
    scanf("%d",&cols);
    

    
    int** arr=(int**)malloc(sizeof(int*));
    for(int i=0;i<rows;i++){
        arr[i]=(int*)malloc(sizeof(int));
    }
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols;j++){
            printf("enter elements: rows-%d,cols%d:\n",i+ 1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols;j++){
            printf("%d",arr[i][j]);
        } 
        printf("\n");   
    }
    free(arr);
    return 0;
}
