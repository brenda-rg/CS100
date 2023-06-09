#include "Logger.h"


#include<fstream>
#include<string>
#include<ctime>


/* References
 * https://rollbar.com/guides/cpp/cpp-error-logging/
 * https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
 * https://www.section.io/engineering-education/how-to-choose-levels-of-logging/
 */

using namespace std;

Logger::Logger() {
	LogPriority GLOBAL_LOG_VERBOSITY_LEVEL = WarnP;
	string PATH_TO_LOG_FILE ="../build/logs/log.txt";
	bool CONVERT_UTC_TO_LOCAL_TIME = true;

	this->verbosity=GLOBAL_LOG_VERBOSITY_LEVEL;
	this->fpath_log=PATH_TO_LOG_FILE;
	this->use_local_time=CONVERT_UTC_TO_LOCAL_TIME
}
/**
 * Priority Levels (Asccending)
 * 	TraceP, DebugP, InfoP, WarnP, ErrorP, FatalP, NoLog
 */

void Logger::addEvent(LogPriority priority_level, string message) {
	string log_time_stamp;
	tm curr_time = time(NULL);
	if (this->use_local_time) {
		tm *tm = ctime(&curr_time);
		log_time_stamp+="[Local Time: " + tm + "] ";
	} else{
		tm *tm = gmtime(&curr_time);
		log_time_stamp+="[UTC Time: " + tm + "] ";
	}
	string curr_log = log_time_stamp;
	if (priority_level >= this->verbosity) {
		switch(priority) {
			case TraceP: curr_log += "[Trace:] \t"; break;
			case DebugP: curr_log += "[Debug:] \t"; break;
			case InfoP: curr_log += "[Info:] \t"; break;
			case WarnP: curr_log += "[Warning:] \t"; break;
			case ErrorP: curr_log += "[Error:] \t"; break;
			case FatalP: curr_log += "[Fatal:] \t"; break;
			case NoLog: break;
		}
	}
}