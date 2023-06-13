#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKBASE_CPP
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKBASE_CPP

#include "../header/TaskBase.h"

//constructors
TaskBase::TaskBase() {
    this->task_id = 0;
    //this->task_id = generate_id();
    this->task_name = "";
    this->completion_status = 0;
    
}
TaskBase::TaskBase(string name) {
    this->task_id = 0;
    //this->task_id = generate_id();
    this->task_name = name;
    this->completion_status = 0;
}

//destructor
TaskBase::~TaskBase() {}

//functions

//setters
/*
int TaskBase::generate_id() {
    //sql stuff
    cout << endl;
    cout << "---STUB---" << endl << "IMPLEMENT generate_id()" << endl;
    return -1;
}
*/


void TaskBase::set_name(string name) {
    this->task_name = name;
}
void TaskBase::set_status(bool status) {
    this->completion_status = status;
}

//accessors
string TaskBase::get_name() {
    return this->task_name;
}
int TaskBase::get_id() {
    return this->task_id;
}

string TaskBase::get_status() {
    if(this->completion_status) {
        return "Completed";
    }
    return "Incomplete";
}

#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKBASE_CPP