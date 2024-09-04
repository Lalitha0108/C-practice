#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char* days[]={"sun","mon","tue","wed","thu","fri","sat"};
    int days_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    char start_day[10];
    int year,month;
    int flag=0,i;
    printf("enter start day:");
    scanf("%s",start_day);
    printf("enter year:");
    scanf("%d",&year);
    printf("enter month:");
    scanf("%d",&month);

    if((year%4==0||year%400==0) && year%100!=0){
        days_month[1]=29;
        flag=1;
    }
    if(month>0 && month <13){
        flag=1;
    }
    if(flag==0){
        printf("given date is invalid");
    }
    else{
         printf(" %s %s %s %s %s %s %s\n","sun","mon","tue","wed","thu","fri","sat");                       
        for(int i=0;days[i]!=NULL;i++){
            if(strcmp(start_day,days[i])==0){
             break;
            }
        }
        for(int j=0;j<i;j++){
            printf("     ");
        }
        for(int j=1;j<=days_month[month-1];j++){
            printf("%4d",j);
            if((i+j)%7==0)
            printf("\n");

        }
        printf("\n");

    }
    return 0;
}
