#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKBASE_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKBASE_H

#include <iostream>
#include <string>
//#include "../header/KooalaText.h"
//also include sql class
using namespace std;

class TaskBase {
	private:
		int task_id;
        int generate_id();
        string task_name;

		public:
        TaskBase();
        TaskBase(string);
        void set_name(string);
        string get_name();
        int get_id();

};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKBASE_H
