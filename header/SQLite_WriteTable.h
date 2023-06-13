#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SQLITE_WRITETABLE_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SQLITE_WRITETABLE_H

#include<string>
#include<vector>
#include<sqlite3.h>

#include "SQLite_CreateTable.h"

using namespace std;
/* Function References:
 * https://www.sqlitetutorial.net/sqlite-insert/
 * https://www.sqlitetutorial.net/sqlite-update/
 * https://www.sqlitetutorial.net/sqlite-delete/
 */

class SQLite_WriteTable: public SQLite_CreateTable {
	public:
		SQLite_WriteTable(string table_name, string database_filename)
		: SQLite_CreateTable(table_name, database_filename) {}
		// Constructor is same as parent classes. SQLite_WriteTable(table_name: string, db_filename:sting)

		int insert(string row_values, string column_names, string other_flags="");
		/**
		 * Parameters:
		 * row_values: string Comma Separated SQL formatted Values for insert. Ex: "value1, value2, ..."
		 * column_names: string Comma Separated SQL formatted Column names
		 *
		 * Returns:
		 * Returns a number representing the success of the execution statement. A returned value of 0 means success.
		 * References:
		 * https://www.sqlite.org/rescode.html
		 *
		 * desc: Appends a row of data to the end of the sqlite table. Automatically generates the id variable for the table so you
		 * don't need to include that. column_names can be left blank and the amount of comma separated values in row_values must be
		 * the same as the amount of columns. Otherwise, specifying column_names will set those values to null for that row.
		 */

		int insertMany(vector<string> row_values, string column_names, string other_flags="");
		 /**
		  *
			* Returns:
			* Returns a number representing the success of the execution statement. A returned value of 0 means success.
			* References:
			* https://www.sqlite.org/rescode.html
		  *
		  * Desc: Works the same as insert function but takes in vector forms of the parameters to allow for bulk inserts.
			*
		  */

		 int update(string new_val, string column_name, string where, string other_flags="");
		 /**
		  * parameters:
		  * new_val: The new value to be replaced
		  * column_name: The name of the column for the new value
		  * where: conditions to determine which rows are affected (In SQL Syntax)
		  * other_flags="": An optional string parameter that is appended to the end of the SQL query.
		  *
		  * Returns:
			* Returns a number representing the success of the execution statement. A returned value of 0 means success.
			* References:
			* https://www.sqlite.org/rescode.html
		  */

		 int remove(string search_conditions, string other_flags="");
		 /**
		  * Parameters:
		  * search_conditions: A string with SQL style Boolean operator. Appended to "WHERE" in sql query. Ex: "col_1 = 2"
		  * other_flags="": An optional string parameter that is appended to the end of the SQL query.
		  *
			* Returns:
			* Returns a number representing the success of the execution statement. A returned value of 0 means success.
			* References:
			* https://www.sqlite.org/rescode.html
		  *
		  * Desc: Removes all rows that satisfy search condition.
		  */
};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SQLITE_WRITETABLE_H