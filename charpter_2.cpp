//
// Created by zmy on 2023/1/15.
//
//2.6
#include <iostream>
#include "cstdio"

using namespace std;
int daytab[2][13]={//预处理
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
bool IsLeapYear(int year){
    return(year%4==0&&year%100!=0)||(year%400==0);
};
int NumberOfYear(int year){
    if(IsLeapYear(year)){
        return 366;
    }
    else
        return 365;
}
/*2.6
 * int main(){
    int year,month,day;
    while (scanf("%d%d%d",&year ,&month  ,&day )!=EOF){
        int number=0;
        int row= IsLeapYear(year);
        for(int j=0;j<month;++j){
            number+=daytab[row][j];
        }
        number+=day;
        printf("%d\n",number);
    }
    return 0;
}*/
/*2.7
int main(){
    int year,month,day;
    int number;
    while(scanf("%d""%d",&year,&number)!=EOF){
        month=0;
        int row= IsLeapYear(year);
        while (number>daytab[row][month]){
            number-=daytab[row][month];
            month++;
        }
        day=number;
        printf("%04d-%02d-%02d",year,month,day);
    }
    return 0;
}
 */
int  main(){
    int year,month,day,number;
    int case_number;
    scanf("%d",&case_number);
    while (case_number--){
        scanf("%d%d%d%d",&year,&month,&day,&number);
        int row= IsLeapYear(year);
        for (int j = 0; j < month; ++j) {
            number=number+daytab[row][j];
        }
        number=number+day;
        while (number> NumberOfYear(year)){
            number=number- NumberOfYear(year);
            year++;
        }
        month=0;
        row= IsLeapYear(year);
        while (number>daytab[row][month]){
            number=number-daytab[row][month];
            month++;
        }
        day=number;
        printf("%04d-%02d-%02d",year,month,day);
    }
    return 0;
}
