#include <iostream>
#include "../header/TaskBase.h"
#include "../header/KooalaText.h"
#include "../src/KooalaText.cpp"

using namespace std;

TaskBase::TaskBase() {
    task_id = generate_id();
    task_name = KooalaText();
}

TaskBase::TaskBase(string name) {
    this->task_id = generate_id();
    this->task_name = KooalaText(name);
}

int TaskBase::generate_id() {
    //whatever sql stuff
    cout << endl;
    cout << "IMPLEMENT generate_id()" << endl;
    return -1;

}

void TaskBase::set_name(string name) {
    this->task_name = KooalaText(name);;
}

string TaskBase::get_name() {
    return this->task_name.getString();
}

int TaskBase::get_id() {
    return this->task_id;
}