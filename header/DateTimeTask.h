#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_DATETIMETASK_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_DATETIMETASK_H

#include "../header/KooalaText.h"
#include "../header/TaskBase.h"

class DateTimeTask : public TaskBase {
	private:
		bool has_date;
        int year;
        int month;
        int day;
        int hour;
        int minute;

		public:
        DateTimeTask();
        void addDate(string);
        void addTime(string);

};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_DATETIMETASK_H
