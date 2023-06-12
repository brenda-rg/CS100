#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_H

//also include sql class
#include <iostream>
#include <vector>
#include "../header/PriorityTask.cpp"

using namespace std;

class TaskList : public PriorityTask {
	protected:
        vector<*Task> v;
        //if master list == 1 may be able to take out idk
        bool is_schedule;
        //if added as a task
        bool is_sublist;

		public:
        //constuctors
        TaskList();
        TaskList(Task*);
        //may not need to implement this idk
        TaskList(vector<Task*>)
        //have to do delete for each task --> go through the vector
        ~PriorityTask();
        //modifiers
        //create task using the string?
        // maybe pass in int instead and fix the int (task_id) stuff for TaskBase?
        void add_task(string);
        void edit_task(string);
        void remove_task(string);
        //accessors
        string get_task(string);
        //could be int or iterator return value
        iterator find_task(string);
};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_H
