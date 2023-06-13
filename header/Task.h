//
// Created by Alex on 6/12/2023.
//

#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASK_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASK_H

#import "PriorityTask.h"

#import<string>

class Task: public PriorityTask {
	private:

	public:
		using PriorityTask::PriorityTask;
		/**
		 * Task will use all the constructors of the parent class
		 */

		bool updateDatabase();
		int collection_id;
		string collection_name;

		void set_collection();
};

/**
 *		Constructors:
 *			Task();
 *			Task(string name);
 *		Protected:
 *			// From TaskBase:
 *			int task_id;
 *			string task_name;
 *			bool is_done;

 *		Public:
 *			// From TaskBase:
 *			void set_name(string);
 *			void set_status(bool);
 *			string get_name();
 *			int get_id();
 *			string get_status();
 *
 * 	From DateTimeTask:
 * 		Constructors:
 */



#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASK_H