#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SQLITE_READTABLE_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SQLITE_READTABLE_H

#include<string>
#include<sqlite3.h>
#include<vector>

#include "SQLite_DatabaseConnect.h"

using namespace std;

// References:
// https://www.tutorialspoint.com/sqlite/sqlite_c_cpp.htm
// https://www.sqlitetutorial.net/sqlite-select/

class SQLite_ReadTable: public DatabaseConnect {
	private:
		friend int callback(void* data, int argc, char **argv, char **azColName);
		/** (Class Variable Private)
		 * callback
		 *
		 * desc: callback function for use by sqlite3_exec. The function is called to handle any data read in from the database
		 */

	protected:
		string table_name;

		vector<vector<string>> data;
		/** (Class Variable Protected)
		 * data
		 *
		 * desc:
		 * A Data Table matrix made of string vectors representing the data from the selected query.
		 * The values in this variable are deleted every time select is called.
		 * Size = Number of Rows Returned From Select Query
		 *
		 * Ex: data[x][y]
		 *      | key_id |  name  |  data  |
		 * x_0: |  y_0   |  y_1   |  y_2   |
		 * x_1: |  y_0   |  y_1   |  y_2   |
		 */

		vector<vector<string>> col_names;
		/** (Class Variable Protected)
		 * col_names
		 *
		 * desc:
		 * A Matrix made of string vectors representing the name of the column from each row of selected data.
		 *
		 * Ex: Based on the data table matrix from the data variable,
		 * x_0: | key_id | name | data |
		 * x_1: | key_id | name | data |
		 */

		vector<int> value_counts;
		/** (Class Variable Protected)
		 * value_counts
		 *
		 * desc:
		 * A vector containing the column count for each row returned from the query
		 */

		vector<void*> sql_log_data;
		/** (Class Variable Protected)
		 * sql_log_datal
		 *
		 * desc:
		 * Data provided in 4th argument of sqlite3_exec. (Rarely Used)
		 */

		vector<string> error_messages;
		/** (Class Variable Protected)
		 * error_messages
		 *
		 * desc:
		 * Contains error messages from the execute function if there are any
		 */

		vector<int> sqlite_query_status;
		/**
		 * desc: Contains the status of the execution statement.
		 * References: https://www.sqlite.org/rescode.html
		 */




public:
		SQLite_ReadTable(string table_name, string db_filename)
		: DatabaseConnect::DatabaseConnect(db_filename),  table_name(table_name) {}

		int execute(string sql_query, bool use_callback=false);
		/** (Class Function Protected)
		 * void execute(string sql_query, bool use_callback = false)
		 *
		 * parameter:
		 * string sql_query : SQL query command in string form
		 * string use_callback = "" : Default Value = false. The callback function is used only for select command
		 *
		 * desc:
		 * Executes an sqlite query command to the database ignoring the table declared in the constructor.
		 * Mostly for use by other functions but can be used to execute any sql commands.
		 * Any select is loaded into the function. If use_callback is true then the sqlite3_exec command uses
		 * the callback function (Used for select, otherwise usually not used).
		 *
		 */

		int selectAll();
		/** (Class Function Public)
		 * selectAll();
		 *
		 * Desc:
		 * Loads all the data from the table into the class. (Not Recommended)
		 * Deletes all previously loaded data before selecting and loading new data.
		 * For large tables the runtime and in-program memory usage is expensive.
		 */

		int select(string col_names,string query_filter, string other_flags="");
		/** (Class Function Public)
		 * select(string query_filter)
		 *
		 * Desc:
		 * Intended way of loading data from table using a filter written in SQL boolean term. (See Reference)
		 * Loads the data from the query into the class
 		 * Deletes all previously loaded data before selecting and loading new data.
		 * The filter is appended to the "WHERE" clause of the SQL query.
		 * Reference: https://www.sqlitetutorial.net/sqlite-where/
		 *
		 * Parameters:
		 * string col_names : column names in string form. Use "*" to get all the column values
		 * string query_filter : string with SQL Boolean Phrase
		 * string other_flags="": Optional input to add more flags to the select query.
		 */

		void dumpData();
		/** (Class Function Public)
		 * dumpData()
		 *
		 * desc:
		 * empties all the class variables holding callback values.
		 * (data, value_counts, col_names, sql_log_data, error_messages)
		 */

		int getSize();

		vector<vector<string>> getData();
		/** (Class Function Public)
		 * getData()
		 *
		 * returns:
		 * this->data: vector<vector<string>>
		 */

		string getDataValue(int x, int y);

		vector<vector<string>> getColNames();
		/** (Class Function Public)
		 * getColNames()
		 *
		 * returns:
		 * this->col_names: vector<vector<string>>
		 */

		vector<int> getValueCounts();
		/** (Class Function Public)
		 * getColNames()
		 *
		 * returns:
		 * this->value_counts: vector<int>
		 */

		vector<void*> getLogData();
		/** (Class Function Public)
		 * getLogData()
		 *
		 * returns:
		 * this->sql_log_data: vector<void*>
		 */

		vector<string> getErrMsg();
		/** (Class Function Public)
		 * getErrMsg()
		 *
		 * returns:
		 * this->error_messages: vector<string>
		 */

};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SQLITE_READTABLE_H