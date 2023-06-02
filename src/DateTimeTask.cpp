#include "../header/DateTimeTask.h"
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

DateTimeTask::DateTimeTask() {
    task_name = "";
    task_id = 0;
    has_date = 0;
    year = 0;
    month = 0;
    day = 0;
}
DateTimeTask::DateTimeTask(TaskBase& oldTask) {
    task_name = oldTask.get_name();
    task_id = oldTask.get_id();
    has_date = 0;
    year = 0;
    month = 0;
    day = 0;
}

void DateTimeTask::addDate(string date) {
    
    char parsedDate[date.size()+1];
    for(int i = 0; i < date.size() ; ++i) {
        parsedDate[i] = date.at(i);
    }
    int  m;
    int d;
    int y;
    sscanf(parsedDate, "%2d/%2d/%4d" , &m, &d, &y);
    
    VerifyDate verify;
    if(verify.verify_monthDayYear(y,m,d) ) {
        month  = m;
        year = y;
        day = d;
        has_date = 1;
    }
    else {has_date = 0;}
}

string DateTimeTask::get_date() {
    int m = month;
    int d = day;
    int y = year;
    string date = to_string(m) + "/" + to_string(d) + "/" + to_string(y);
    return date;
}
