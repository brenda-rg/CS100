#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USERSORT_CPP
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USERSORT_CPP

//also include sql class
#include <iostream>
#include <vector>
#include <cstring>
#include "../header/UserSort.h"
#include "../header/TaskList.h"

using namespace std;

void UserSort::getTaskByAlpha(TaskList& tasklist) {
    for(int i = 0; i < tasklist.size(); i++) {
        for(int j = i+1; j < tasklist.size(); j++) {
            if(tasklist.at(i)->get_name() > taskList.at(j)->get_name()) {
                Task* temp = tasklist.at(i);
                tasklist.at(i) = tasklist.at(j);
                tasklist.at(j) = temp;
                temp = nullptr;
            }
        }
    }

}

//might need fixing
void UserSort::getTaskChrono(TaskList tasklist ) {
    for(int i = 0; i < tasklist.size(); i++) {
        for(int j = i+1; j < tasklist.size(); j++) {
            if(((tasklist.at(i)->get_year() > tasklist.at(j)->get_year()) || 
            ((tasklist.at(i)->get_year() >= tasklist.at(j)->get_year()) && (tasklist.at(i)->get_month() > tasklist.at(j)->get_month())) ||
            ((tasklist.at(i)->get_year() >= tasklist.at(j)->get_year()) && (tasklist.at(i)->get_month() >= tasklist.at(j)->get_month()) && (tasklist.at(i)->get_day() >= taskList.at(j)->get_day()))) ||
             (!tasklist.at(i)->has_date))
            {
                Task* temp = tasklist.at(i);
                tasklist.at(i) = tasklist.at(j);
                tasklist.at(j) = temp;
                temp = nullptr;
            }
        }
    }
}

void UserSort::getTaskByPriority(TaskList& tasklist ) {
    for(int i = 0; i < tasklist.size(); i++) {
        for(int j = i+1; j < tasklist.size(); j++) {
            if((tasklist.at(i)->get_priority() > taskList.at(j)->get_priority() && tasklist.at(j)->get_priority() != -1)|| (tasklist.at(i)->get_priority() == -1) {
                Task* temp = tasklist.at(i);
                tasklist.at(i) = tasklist.at(j);
                tasklist.at(j) = temp;
                temp = nullptr;
            }
        }
    }
}


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USERSORT_CPP
