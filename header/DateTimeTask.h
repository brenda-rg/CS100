#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_DATETIMETASK_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_DATETIMETASK_H

#include<string>
#include<chrono>

#include "../header/TaskBase.h"
#include "../header/VerifyDate.h"

using namespace std;

class DateTimeTask : public TaskBase {
	protected:
        bool has_date = false;
        int year = -1;
        int month = -1;
        int day = -1;

	public:
        DateTimeTask();
        DateTimeTask(TaskBase*);
        DateTimeTask(string);
        ~DateTimeTask();
        //functions
        void add_date(string);
        string get_date();
        int get_month();
        int get_year();
        int get_day();
};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_DATETIMETASK_H