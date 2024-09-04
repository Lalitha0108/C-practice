#include<stdio.h>
#include<string.h>
int count = 3;
struct management{
    char name[20];
    int phone_number;
    char email[20];
};
struct management st[3];
void printArray(){
    int i;
    for(int i=0;i<count;i++){
        printf("\n name:%s  , phone number:%d  , email:%s",st[i].name,st[i].phone_number,st[i].email);
    }

}
void add(){
    for(int i=0;i<count;i++){
        printf("enter name:");
        scanf("\n%[^\n]s",st[i].name);

        printf("enter phone number:");
        scanf("%d",&st[i].phone_number);

        printf("enter email:");
        scanf("\n%[^\n]s",st[i].email);
    }
}
void edit(){
    char new_name[20];
    printf("enter  name to search:");
    scanf("\n%[^\n]s",new_name);
    for(int i=0;i<count;i++){
        if(!strcmp(st[i].name,new_name)){
            printf("enter name:");
            scanf("\n%[^\n]s",st[i].name);

            printf("enter phone number:");
            scanf("%d",&st[i].phone_number);

            printf("enter email:");
            scanf("\n%[^\n]s",st[i].email);
        }

            
    }
}
void delete(){
    char name1[20];
    printf("enter name:");
    scanf("\n%[^\n]s",name1);
    int i=0;
    for(i=0;i<count;i++){
        if(strcmp(st[i].name,name1)==0){
            break;
        }
    }
    
    for(i; i<count-1;i++){
        st[i]=st[i+1];
    }
    count--;
    printArray();
}

int main(){
    add();
    edit();
    printArray();
    delete();
    return 0;
}

// Bharath
// 1234
// Bharath
// Logesh
// 5678
// Logesh
// Kiren
// 123
// Kiren