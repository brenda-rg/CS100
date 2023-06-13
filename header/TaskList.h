#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_H

//also include sql class
#include <iostream>
#include <vector>
#include <string>
#include "../header/PriorityTask.cpp"
#include "../header/Task.h"

using namespace std;

class TaskList : public PriorityTask {
	protected:
        //if master list == 1 may be able to take out idk
        bool is_schedule;
        //if added as a task
        bool is_sublist;
				vector<*Task> tasks;

		public:
        //constuctors
        TaskList(string username);
        //may not need to implement this idk
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
        Task find_task(string);
};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_H