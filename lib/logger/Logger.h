#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_LOGGER_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_LOGGER_H


#include<string>

using namespace std;

/* References
 * https://rollbar.com/guides/cpp/cpp-error-logging/
 * https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
 */

enum LogPriority {
	TraceP, DebugP, InfoP, WarnP, ErrorP, FatalP, NoLog
};

class Logger {
	private:
		LogPriority verbosity;
		string fpath_log;
		bool use_local_time;
	public:
		Logger();
		void addEvent(LogPriority priority_level, string message);
};

// Sets the warning level of the logger

#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_LOGGER_H