#include<stdio.h>
#include<string.h>
struct product{
    char product_name[20];
    int rating;
    char review_text[30];
};
struct product st[3];
int main(){
    for(int i=0;i<3;i++){
        printf("enter product name:");
        scanf("\n%[^\n]s",st[i].product_name);

        printf("enter rating:");
        scanf("%d",&st[i].rating);

        printf("enter review text:");
        scanf("\n%[^\n]s",st[i].review_text);
    }

    printf("all information about product is: \n");
    int avg=0;
     for(int i=0;i<3;i++){
        avg=avg+st[i].rating;
        printf("\nproductname:%s, rating:%d, review_text:%s",st[i].product_name,st[i].rating,st[i].review_text);
    }
    avg=avg/3;
    printf("\naverage rating:%d \n",avg);
    
    char specified_product[20];
    printf("enter the product name: ");
    scanf("%s",specified_product);
    for(int i=0;i<3;i++){
        if(!strcmp(st[i].product_name,specified_product)){
            printf("\n review text is: %s \n",st[i].review_text);
        }
    }
    return 0;
}
