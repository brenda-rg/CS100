#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_H

//also include sql class
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

#include "../header/PriorityTask.h"
#include "../header/Task.h"

#include"../header/Table_Task.h"

using namespace std;

class TaskList{
	private:
		string username;

	protected:
        //if master list == 1 may be able to take out idk
        // bool is_schedule;
        //if added as a task
        // bool is_sublist;
				Table_Task task_table;

				vector<Task> tasks;
				vector<string> task_names;
				// unordered_map<string, Task*> task_map;




		public:
        //constuctors
        TaskList(string username);
				~TaskList();
        //may not need to implement this idk
        //have to do delete for each task --> go through the vector
        TaskList();
        //modifiers
        //create task using the string?
        // maybe pass in int instead and fix the int (task_id) stuff for TaskBase?
        void add_task(Task new_task);
        void edit_task(Task target, string column_name, string new_val);
        void remove_task(Task target);

				void pull_database();

        //accessors
				Task get_task(int i);
        //could be int or iterator return value
};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_H