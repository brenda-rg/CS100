

#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_DATABASECONNECT_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_DATABASECONNECT_H

#include<string>
#include<sqlite3.h>
#include<vector>

using namespace std;

// https://www.tutorialspoint.com/sqlite/sqlite_c_cpp.htm

class DatabaseConnect {
	private:
		bool connection_check;

	protected:
		string database_filename;
 		sqlite3 *db;


	public:
		DatabaseConnect(string filename);
		~DatabaseConnect();
		bool checkConnection();
		void openConnection();
		void closeConnection();
};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_DATABASECONNECT_H
