#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKBASE_CPP
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKBASE_CPP

#include "../header/TaskBase.h"


TaskBase::TaskBase() {
    task_id = 0;
    task_name = "";
}

TaskBase::TaskBase(string name) {
    this->task_id = generate_id();
    this->task_name = name;
}

int TaskBase::generate_id() {
    //sql stuff
    cout << endl;
    cout << "IMPLEMENT generate_id()" << endl;
    return -1;

}

void TaskBase::set_name(string name) {
    this->task_name = name;
}

string TaskBase::get_name() {
    return this->task_name;
}

int TaskBase::get_id() {
    return this->task_id;
}

#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKBASE_CPP