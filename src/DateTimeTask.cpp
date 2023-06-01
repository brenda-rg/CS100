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
    hour = 0;
    minute = 0;
}
DateTimeTask::DateTimeTask(TaskBase& oldTask) {
    task_name = oldTask.get_name();
    task_id = oldTask.get_id();
    has_date = 0;
    year = 0;
    month = 0;
    day = 0;
    hour = 0;
    minute = 0;
}

// ask user to enter date as "mm/dd/yyyy"
// or ask for each part individually and we change the inputs
// have a different function for validaiton 
// (maybe even a class for date validation)

void DateTimeTask::addDate(string date) {
    
    char parsedDate[date.size()+1];
    for(int i = 0; i < date.size() ; ++i) {
        parsedDate[i] = date.at(i);
    }
    int  m;
    int d;
    int y;
    sscanf(parsedDate, "%2d/%2d/%4d" , &m, &d, &y);
    if(VerifyDate::verify_monthDayYear(y,m,d) ) {
        month = 
    }
    //validate date(m,y,d) //functions to validate
    //look at
    has_date = 1;
}

void DateTimeTask::addTime(string time) {
    cout << endl
    << "--STUB--"
    << "FINISH addTime() function"
    << endl;
}

void DateTimeTask::get_date() {
    cout << endl
    << month << "/" << day << "/" << year
    << endl;
}
