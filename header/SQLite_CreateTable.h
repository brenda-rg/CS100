//
// Created by Alex on 6/2/2023.
//

#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SQL_CREATETABLE_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SQL_CREATETABLE_H

#include<string>
#include<sqlite3>
#include<vector>

#include "SQLite_DatabaseConnect.h"
#include "SQLite_ReadTable.h"

using namespace std;

/* references:
 * https://www.sqlitetutorial.net/sqlite-create-table/
 */

class SQLite_CreateTable::public SQLite_ReadTable {
	public:
		using SQLite_ReadTable::SQLite_ReadTable;
		/**
		 * Uses same constructor as ReadTable
		 */

		// accepts variables to be made with the table using SQL syntax
		int createNewTable(string table_name, vector<string> vars);
	 /** (Class Method Public)
		* Parameter:
	  * table_name: The name of the table
	  * vars: The variable declaration for SQL see description for loading example
	  *
		* Returns:
		* Returns a number representing the success of the execution statement. A returned value of 0 means success.
		* References:
		* https://www.sqlite.org/rescode.html
		*
		* Desc:
		* Creates a new table in SQL if that table does not already exist. If the table already exist, it will do nothing.
		* Table column variable declaration should be loaded into a vector which will automatically format the query request.
		* Don't forget to add the query request.
		*
		* How to declare vars using api:
		* 1. Make vars vector and add primary key:
		* 			vector<string> table_vars;
		* 			table_vars.append("example_id INTEGER PRIMARY KEY");
		* 2. Add other vars:
		* 			table_vars.append("example_var1 TEXT");
		* 			table_vars.append("example_var2 TEXT");
		* 3.
		*/

	 bool checkExist();
};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SQL_CREATETABLE_H