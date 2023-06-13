#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_CPP
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_CPP

//also include sql class
#include <iostream>
#include "../header/TaskList.h"
#include "../header/Task.h"

using namespace std;

//constuctors
TaskList::TaskList(string username){
		this->username = username;
		this->pull_database();
}

/*
TaskList::~TaskList() {
	for (int i=0;i<this->tasks.size();++i) {
		delete this->tasks[i];
	}
}
 */

void TaskList::pull_database() {
	string where_cond = "username=" + this->username;
	this->task_table.select("*",where_cond);
	for (int i=0; i<(this->task_table.getSize());++i) {
		string task_name = this->task_table.getDataValue(i,1);
		this->task_names.push_back(task_name);
		Task curr_pull_task(
			this->task_table.getDataValue(i,0),
			this->task_table.getDataValue(i,1),
			this->task_table.getDataValue(i,2),
			this->task_table.getDataValue(i,3),
			this->task_table.getDataValue(i,4),
			this->task_table.getDataValue(i,5),
			this->task_table.getDataValue(i,6),
			this->task_table.getDataValue(i,7),
			this->task_table.getDataValue(i,8),
			this->task_table.getDataValue(i,9),
			this->task_table.getDataValue(i,10),
			this->task_table.getDataValue(i,11)
			);
		this->tasks.push_back(curr_pull_task);
	}
}

void TaskList::add_task(Task new_task){
	// this->task_names.push_back(new_task->get_name());
	//this->task_map[new_task->get_name()] = new_task;
	this->tasks.push_back(new_task);
	this->task_names.push_back(new_task.get_name());
}



Task TaskList::get_task(int index) {
	return tasks[index];
}
//accessors
//could be int or iterator return value


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKLIST_CPP