#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASK_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASK_H

#include<string>
#include<chrono>

#include "../header/Table_Task.h"
#include "../header/Table_SubfeatDesc.h"


// Include latest Task Version Here (Remember to update inheritance)
#include "PriorityTask.h"

class Task: public PriorityTask {
	private:
		Table_Task task_table;
		Table_SubfeatDesc subfeat_desc_table;
		string origin_username;
		int task_id = -1;
		int priority = -1;

	public:
		Task(string username, string task_name);
		/**
		 * Constuctor for a new Task
		 */

		Task(
				string task_id,
				string task_name,
				string username,
				string completion_status,
				string priority_val,
				string has_date, string has_time,
				string year, string month, string day,
				string hour, string minute
		);
		/**
		 * Constructor for building from sql_database
		 */

		bool has_time=false;
		int hour = -1; //Placeholder for future implementation
		int minute = -1; //Placeholder for future implementation
		/**
		 * Task will use all the constructors of the parent class
		 */

		void addDatabaseEntry();
		void pullTags();

		void set_name(string);
		void set_status(string);
		void add_date(string);
		void set_priority(int);
		void remove_priority();
		void add_tag(string);
		void delete_tags();
};

/**
 *		Constructors:
 *			Task();
 *			Task(string name);
 *
 *		Protected:
 *			// From TaskBase:
 *			int task_id;
 *			string task_name;
 *			bool completion_status;
 *
 *			// From DateTimeTask
 *			bool has_date = false;
 *			int year = 0;
 *			int month = 0;
 *			int day = 0;
 *
 *			// From PriorityTask:
 *			int priority;
 *
 *			// From TagTask:
 *			Vector<Tag> tags;
 *			int tags_size;
 *
 *		Public:
 *			// From TaskBase:
 *			void set_name(string);
 *			void set_status(bool);
 *			string get_name();
 *			int get_id();
 *			string get_status();
 *
 *			// From DateTimeTask:
 *			void add_date(string);
 *			string get_date();
 *			int get_month();
 *			int get_year();
 *			int get_day();
 *
 *			// From PriorityTask:
 *			void set_priority(int);
 *			void remove_priority();
 *			int get_priority();
 *
 *			// From TagTask:
 *			void add_tag(string);
 *			void delete_tag(string);
 *			string display_tags();
 *			vector<Tag>::iterator find_tag(string);
 *
 */



#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASK_H