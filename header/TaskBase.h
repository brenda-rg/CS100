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
        //constuctors
        TaskBase();
        TaskBase(string);
        //destructor
        ~TaskBase();
        //modifiers
        void set_name(string);
        //accessors
        string get_name();
        int get_id();

};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKBASE_H
