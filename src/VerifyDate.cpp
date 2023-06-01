#include <iostream>
#include "VerifyDate.h"
#include "DateTimeTask.h"

bool VerifyDate::verify_day(int year, int month, int day) {
    if((month==1 || month==3 || month==5|| month==7|| month==8||month==10||month==12) && day>0 && day<=31) {
        return 1;
    }
    else if(month==4 || month==6 || month==9|| month==11 && day>0 && day<=30) {
        return 1;
    }
    else if(month == 2) {
        if((year%400==0 || (year%100!=0 && year%4==0)) && day>0 && day<=29) {
            return 1;
        }
        else if(day>0 && day<=28) {
            return 1;
        }
    }
    return 0;
}

bool VerifyDate::verify_month(int month) {
    return(month >= 1 && month <= 12);
}

bool VerifyDate::verify_year(int year) {
    return(year > 2022 && year < 3000);
}

bool VerifyDate::verify_monthDayYear(int year, int month, int day) {
    if(verify_year(year)) {
        if(verify_month(month)) {
            return(verify_day(year, month, day))
        }
    }
    return 0;
}