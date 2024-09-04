#include<stdio.h>
#include<string.h>
struct movie{
    char title[20];
    char director[20];
    int release_year;
};
struct movie st[3];
void func1()
{
    for(int i=0;i<3;i++){
        printf("enter title:");
        scanf("%s",st[i].title);

        printf("enter director name:");
        scanf("%s",st[i].director);

        printf("enter release year:");
        scanf("%d",&st[i].release_year);

    }
}
void Sort(){
    int i,j;
    struct movie temp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3-1;j++){
            if(st[i].release_year>st[j].release_year){
                temp=st[i];
                st[i]=st[j];
                st[j]=temp;
            }
        }
    }
}
void PrintArray(){
    int i;
    for(int i=0;i<3;i++){
        printf("\n title:%s  , director:%s  , release_year:%d",st[i].title,st[i].director,st[i].release_year);
    }

}
int main(){
    
    func1();
    Sort();
    PrintArray();

    return 0;
}
