#include "../header/DateTimeTask.h"
#include "../header/TaskBase.h"
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

DateTimeTask::DateTimeTask() {
    has_date = 0;
    year = 0;
    month = 0;
    day = 0;
    hour = 0;
    minute = 0;
}
DateTimeTask::DateTimeTask(TaskBase& oldTask) {
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
    
    char parsedDate[date.size() +1];
    for(int i = 0; i < date.size() ; ++i) {
        parsedDate[i] = date.at(i);
    }
    sscanf(parsedDate, "%2d/%2d/%4d" , month, day, year);
    has_date = 1;
}

void DateTimeTask::addTime(string time) {
    cout << endl
    << "--STUB--"
    << "FINISH addTime() function"
    << endl;
}
