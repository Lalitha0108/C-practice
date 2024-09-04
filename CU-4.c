#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_calendar(int ,int ,char*,int*);

int main() {
    int months,years;
    char start_day[10];
    int days_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int flag=0;
    printf("\n---- enter day like below mentioned format ----\n");
    printf("\n sun mon tue wed thu fri sat ");
    printf("\nenter the starting day of month : ");
    scanf("%s",start_day);
    printf("enter month : ");
    scanf("%d",&months);
    printf("enter year : ");
    scanf("%d",&years);
    if((years%4==0 || years%400==0) && years%100!=0){   
    days_month[1]=29;
    flag=1;
    }
    if(months>0 && months<13) 
    flag=1;
    if(flag==0){
    printf("Given date is Invaild.\n");
    return 0;
    }
    else{
        print_calendar(months,years,start_day,days_month); 
    }

return 0;
}


void print_calendar(int months,int years,char*start_day,int* days_month){

    char *days[] ={"sun","mon","tue","wed","thu","fri","sat"};
    int len,i,j;
    printf(" %s %s %s %s %s %s %s\n","sun","mon","tue","wed","thu","fri","sat");
    for(i=0;days[i]!=NULL;i++){
        if(strcmp(start_day,days[i])==0){
        break;
        }
    }
    for(j=0;j<i;j++){
        printf("    ");
    }
    for(j=1;j<=days_month[months-1];j++){
        printf("%4d",j);
        if((i+j)%7==0)
        printf("\n");
    }
    printf("\n");
    }