#include "../header/Task.h"

#include<string>
#include<vector>

#include"../header/TaskBase.h"
#include"../header/PriorityTask.h"
#include"../header/TagTask.h"
#include"../header/DateTimeTask.h"

using namespace std;

Task::Task(
		string task_id,
		string task_name,
		string username,
		string completion_status,
		string priority_val,
		string has_date, string has_time,
		string year, string month, string day,
		string hour, string minute
		) {
	this->task_id=stoi(task_id);
	this->task_name=task_name;
	this->origin_username=username;
	this->completion_status = stoi(completion_status);
	this->priority = stoi(priority_val);
	this->has_date=stoi(has_date);
	this->has_time = stoi(has_time);
	this->year = stoi(year);
	this->month = stoi(month);
	this->day=stoi(day);
	this->hour=stoi(hour);
	this->minute=stoi(minute);
}

void Task::addDatabaseEntry() {

	if (this->task_id == -1) {
		string row_vals =(
				this->task_name  +","+  this->origin_username + "," +
				to_string(this->completion_status) + "," +  to_string(this->priority) + "," +
				to_string(this->has_date) + "," +  to_string(this->has_time) + "," +
				to_string(this->year) + "," +  to_string(this->month) + "," +  to_string(this->day) + "," +
				to_string(this->hour) +  to_string(this->minute) );

		this->task_table.insert(
				row_vals,
				this->task_table.getInsertKey()
		);
	}

	string where_cond = ( "((task_name = " + this->task_name + ") AND (username = "
												+ this->origin_username + ") AND (year = " + to_string(this->year) + ") AND (month = " + to_string(this->month) + ")"
												+ ");" );

	this->task_table.select("*", where_cond, " ORDER BY task_id DESC");
	this->task_id = stoi(task_table.getDataValue(0, 0));

}


void Task::set_name(string name) {
	TaskBase::set_name(name);
	string where_cond = "task_id = " + to_string(this->task_id);
	this->task_table.update(name, "task_name", where_cond);
}

void Task::pullTags() {

}