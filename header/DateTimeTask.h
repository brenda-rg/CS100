#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_DATETIMETASK_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_DATETIMETASK_H

#include "../header/TaskBase.h"
#include "../header/VerifyDate.h"

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
};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_DATETIMETASK_H
