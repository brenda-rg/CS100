#include "../header/TaskDateTimeChrono.h"

#include<string>
#include<ctime>
#include<cassert>

#include "../header/TaskBase.h"

using namespace std;

TaskDateTimeChrono::TaskDateTimeChrono(){}
TaskDateTimeChrono::~TaskDateTimeChrono(){}

void TaskDateTimeChrono::add_date(int year, int month, int day){
	assert(year>1970) << "[Error:] In Task.add_date(int year, int month, int day) the year must be after 1970";
	assert((month>=0) && (month<=12)) << "[Error:] Invalid month. Must be between 1-12";
	this->due_datetime_local.tm_year=year - 1900;
	this->due_datetime_local.tm_month=month-1;
	this->due_datetime_local.tm_mday=day;
	this->due_datetime_local.tm_hour=23;
	this->due_datetime_local.tm_min = 59;
	this->due_datetime_local.tm_isdt=-1;
	this->has_date = true;
	this->due_datetime_epoch = mktime(&this->due_datetime_local);
	assert(this->due_datetime_epoch!=-1)<<"invalid input for datetime";
}

void TaskDateTimeChrono::addTime(int hour, int minute){
	assert((0<=hour) && (hour<=23)) <<"Invalid Hour. Hour outside of range 0-23";
	assert((0<=minute) && (minute<=59))  << "Invalid Minute. Minute outside of range 0-59";
	assert(this->has_date==true)<< "Time cannot be added without date.";
	this->due_datetime_local.tm_hour = hour;
	this->due_datetime_local.tm_min = minute;
	this->has_time = true;
	this->due_datetime_epoch = mktime(this->due_datetime_local);
	assert(this->due_datetime_epoch!=-1) <<"Invalid input for datetime";
}

void TaskDateTimeChrono::addDateTime(int year, int month, int day, int hour, int minute) {
	this->add_date(year, month, day);
	this->add_time(hour, minute);
}

void TaskDateTimeChrono::addEpochDate(int year, int month, int day) {
	this->due_datetime_epoch.tm_year = year;
	this->due_datetime_epoch.tm_month = month;
	this->due_datetime_epoch.tm_mday = day;
	this->due_datetime_epoch.tm_isdt=-1;
	this->has_date = true;
	this->due_datetime_local=localtime(&this->due_datetime_epoch);
	assert(this->due_datetime_local!=NULL)<<"Bad Epoch Date in Task Constructor";
}

void TaskDateTimeChrono::addEpochTime(int hour, int minute) {
	assert(this->has_date==true)<<"Date must be added before using addEpochTime";
	this->due_datetime_epoch.tm_hour=hour;
	this->due_datetime_epoch.tm_min=minute;
	this->has_time=true;
	this->due_datetime_local=localtime(&this->due_datetime_epoch);
	assert(this->due_datetime_local!=NULL)<<"Bad Epoch Time in DateTime Constructor";
}