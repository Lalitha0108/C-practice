#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void find_day(int,int,int,char*);

int main(){
   
    int date,month,year;
    
    char start_day[10];
    printf("\n---- enter day like below mentioned format ----\n");
    printf("\n sun mon tue wed thu fri sat \n");

    printf("enter the starting day of year : ");
    scanf("%s",start_day);
    printf("enter date :");
    scanf("%d",&date);
    printf("enter month : ");
    scanf("%d",&month);
    printf("enter year : ");
    scanf("%d",&year);
    find_day(date,month,year,start_day);
    return 0;
}


void find_day(int date,int month,int year,char* start_day){
    int flag=0,index,i,total_days;
    char *day[] ={"mon","tue","wed","thu","fri","sat","sun"};
    int days_month[]={31,28,31,30,31,30,31,31,30,31,30,31};

    if((year%4==0 ||year%400==0) && year%100!=0){
        days_month[1]=29;
        if(month==2 && date>0 && date<30)
        flag=1;
    }
    else{
        if(month==2 && date>0 && date<29)
        flag=1;
    }
    if((month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month== 12) && date>0 && date<32)
        flag=1;
    else if((month==4 || month==6 || month==9 || month==11) && date>0 && date<31)
        flag=1;
    if(flag==0){
        printf("Given date is Invaild.\n");
        return ;
    }
    else{
        i=0;
        while(i<(month-1)){
            total_days+=days_month[i];
            i++;
        }
        for(i=0;day[i]!=NULL;i++){
            if(strcmp(start_day,day[i])==0){
                break;
            }
        }
        total_days+=(date-1);
        index=(i+total_days)%7;
        printf("%d-%d-%d : %s\n",date,month,year,day[index]);
    }
}
