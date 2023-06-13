#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_DATETIMETASK_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_DATETIMETASK_H

#include<string>
#include<chrono>

#include "../header/TaskBase.h"
#include "../header/VerifyDate.h"

using namespace std;

class DateTimeTask : public TaskBase {
	protected:
        bool has_date;
        int year;
        int month;
        int day;

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