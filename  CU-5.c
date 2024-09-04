#include<stdio.h>
#include<stdlib.h>
int main(){
    int days[]={"mon","tue","wed","thurs","fri","sat"};
    int days_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int date,year,month;
    int flag,total_days,index,d1,i;

    char start_day[10];

    printf("enter start day");
    scanf("%s",&start_day);
    printf("enter date");
    scanf("%d",&date);
    printf("enter month");
    scanff("%d",&month);
    printf("enter year");
    scanf("%d",&year);

    if((year%4==0 || year%400==0)&& year %100!=0){
        days_month[1]=29;
        if(month==2 && date>0 && date<30){
            flag=1;
        }
    }
    else{
        if(month==2 && date>0 && date<29){
            flag=1;
        }
    }
    if(month==1||month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        flag=1;
    }else if(month==4 || month==6 || month==9 || month==11){
            flag=1;
        }
    if(flag==0){
        printf("given invalid date");
    }
    else{
        for(int i=0;i<month;i++){
            total_days+=days_month[i];

        }
        for(int i=0;days[i]!=NULL;i++){
            if(strcmp(start_day,days[i]));
            break;
        }
    }
    index=total_days%7;
    d1=(i+index)%7;
    printf("%d-%d-%d : %s\n",date,month,year,days[d1-1]);
return 0;
}

