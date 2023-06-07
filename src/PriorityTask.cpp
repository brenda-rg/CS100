#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_PRIORITYTASK_CPP
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_PRIORITYTASK_CPP

//also include sql class
#include <iostream>
#include "../header/PriorityTask.h"

using namespace std;
//constuctors
PriorityTask::PriorityTask() {
    tthis->priority = -1;
    this->tags_size = 0
    this->task_id = 0;
    this->task_name = ""
    this->has_date = 0;
    this->year = 0;
    this->month = 0;
    this->day = 0;
}
PriorityTask::PriorityTask(TagTask* oldTask) {
    this->priority = -1;
    //add tagSize() getter;
    //this->tags_size = oldTask->get_tagSize();
    this->task_id = 0;
    this->task_name = oldTask->get_name();
    this->has_date = oldTask->get_status() == "Completed" ? 1:0;
    this->year = oldTask->get_year();
    this->month = oldTask->get_month();
    this->day = oldTask->get_day();
}
PriorityTask::~PriorityTask() {}
//modifiers
//should we give a range for the priority values? 1-10?
void PriorityTask::set_priority(int prior) {
    this->priority = prior > 0? prior : -1;
    if(prior < 1) {
        throw invalid_argument("Priority must be 1 or greater (1: Highest priority)");
    }
}
void PriorityTask::remove_priority() {
    this->priority = -1;
}
//accessors
int PriorityTask::get_priority() {
    return this->priority;
}

#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_PRIORITYTASK_CPP
