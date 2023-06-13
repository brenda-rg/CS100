#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_TASK_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_TASK_H

#include<string>

#include "../header/Table_Base.h"

using namespace std;

class Table_Task: public Table_Base {
	private:
		string table_name = "tasks";
		string primary_key="task_id";
		vector<string> column_names ={
				"task_id","task_name", "username",
				"completion_status","priority_val",
				"has_date","has_time",
				"year","month","day",
				"hour","minute"
		};

		vector<string> insert_key = {
				"task_name", "username",
				"completion_status", "priority_val",
				"has_date","has_time",
				"year","month","day",
				"hour","minute"
		};

	public:
		Table_Task()
		: Table_Base(this->table_name){}


};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_TASK_H