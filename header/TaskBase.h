#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKBASE_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKBASE_H

#include <iostream>
#include <string>
//also include sql class
using namespace std;

class TaskBase {
	protected:
		int task_id;
        string task_name;
        int generate_id();

		public:
        TaskBase();
        TaskBase(string);
        void set_name(string);
        string get_name();
        int get_id();

};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKBASE_H
