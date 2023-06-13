#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKDATETIMECHRONO_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKDATETIMECHRONO_H

#include<chrono>
#include<string>
#include<ctime>

#include "../header/TaskBase.h"

using namespace std;

class TaskDateTimeChrono {
	protected:
		bool has_date = false;
		bool has_time = false;

		tm due_datetime_local{0};
		tm due_datetime_epoch{0};

	public:
		TaskDateTimeChrono();
		~TaskDateTimeChrono();
		void addDate(int year, int month, int day);
		void addTime(int hour, int minute);
		void addDateTime(int year, int month, int day, int hour, int minute);
		void addEpochDate(int year, int month, int day);
		string get_local_date();
		string get_local_datetime();
		int get_month();
		int get_year();
		int get_day();
		int get_hr();
		int get_min();

};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKDATETIMECHRONO_H