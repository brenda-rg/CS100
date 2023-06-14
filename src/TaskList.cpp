#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_CPP
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_CPP

//also include sql class
#include <iostream>
#include "../header/TaskList.h"

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
iterator TaskList::find_task(string);

#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_CPP
#include <iostream>
#include <ostream>
#include "../header/TaskList.h"
#include "../header/Task.h"
#include <vector>

using namespace std;

TaskList::TaskList() {
    name = "Schedule";
    tasks.clear();
    size = 0;
}

void TaskList::addTask(string name){
    PriorityTask task = PriorityTask(name, size);
    tasks.push_back(task);
    size++;
}

void TaskList::removeTask(int idnum) {
    if(this->size > 0) {
        vector<PriorityTask>::iterator it = findTask(idnum);
        it = tasks.erase(it);
        --(this->size);
        updateTaskId();
    }
    else {
        throw invalid_argument("No tasks present, cannot delete");
    }
}

void TaskList::editTask(int id, int change) {
    vector<PriorityTask>::iterator it = findTask(id);
    string input;
    int num;
    switch(change) {
        case 9:
            break;
        case 1:
            cout << "please enter the name you would like to use " << endl;
            getline(cin, input);
            it->set_name(input);
            break;
        case 2:
            it->set_status(1);
            break;
        case 3: 
            it->set_status(0);
            break;
        case 4:
            cout << "please enter the description for your task " << endl;
            getline(cin, input);
            it->set_description(input);
            break;
        case 5:
            cout << "please enter the date for this task in the format mm/dd/yyy " << endl;
            getline(cin, input);
            it->add_date(input);
            break;
        case 6:
            cout << "please enter a tag to add to this task" << endl;
            getline(cin, input);
            it->add_tag(input);
            break;
        case 7:
            cout << "please enter a tag to delete" << endl;
            getline(cin, input);
            it->delete_tag(input);
            break;
        case 8:
            cout << "please enter the priority (1-10) of the task 1: Urgent -> 10: Doesn't matter" << endl;
            cin >> num;
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            it->set_priority(num);
            break;
    }

}

void TaskList::displayTaskList() {
    cout << string(59, '_')
    << endl
    << string(25, ' ')
    << "SCHEDULE"
    << string(25, ' ')
    << endl
    << string(59, '_')
    << endl;

    for(vector<PriorityTask>::iterator it = tasks.begin(); it != tasks.end(); it++) {
        cout << endl
        << endl
        << it->get_id()
        << ". "
        << it->get_name()
        << " --> "
        << it->get_status();

        if(it->get_hasDate()) {
        cout << " -- "
        << it->get_date();
        }
        
        if(it->get_priority() != -1) {
        cout << endl
        << " PRIORITY:  "
        << it->get_priority();
        }

        cout << endl
        << it->display_tags();

        if(it->get_description() != "") {
        cout << endl
        << "\t * "
        << it->get_description();
        }
        cout << endl << endl;
    }

    if(tasks.empty()) {
        cout << "No Tasks to do" << endl;
    }
}

vector<PriorityTask>::iterator TaskList::findTask(int id) {
    for (vector<PriorityTask>::iterator its = tasks.begin(); its != tasks.end();)
    {
        if(id == its->get_id()){
            return its;
        }
        else {
            ++its;
        }
    }
    throw invalid_argument("task not found, please enter valid task to delete");
}

int TaskList::getTaskSize() {
    return this->size;
}
vector<PriorityTask> & TaskList::getTasks() {
    return this->tasks;
}

void TaskList::updateTaskId() {
    int i = 0;
    for (vector<PriorityTask>::iterator it = tasks.begin(); it != tasks.end(); ++it)
    {
        it->set_id(i);
        ++i;
    }
}