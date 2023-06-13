#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_CPP
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_CPP

//also include sql class
#include <iostream>
#include "../header/TaskList.h"
#include "../Task.h"

using namespace std;

//constuctors
TaskList::TaskList();
TaskList::TaskList(Task*);
//may not need to implement this idk
TaskList::TaskList(vector<Task*>)
//have to do delete for each task --> go through the vector
TaskList::~PriorityTask();
//modifiers
//create task using the string?
// maybe pass in int instead and fix the int (task_id) stuff for TaskBase?
void TaskList::add_task(string);
void TaskList::edit_task(string);
void TaskList::remove_task(string);
//accessors
string TaskList::get_task(string);
//could be int or iterator return value
Task TaskList::find_task(string);

#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_CPP