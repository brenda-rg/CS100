#include "../header/SQLite_CreateTable.h"

#include<string>
#include<sqlite3.h>
#include<cstdio>
#include<stdexcept>
#include<assert.h>


using namespace std;

// https://www.tutorialspoint.com/sqlite/sqlite_c_cpp.htm


int SQLite_CreateTable::createNewTable(vector<string> vars) {
	assert(vars.size()>0);

	string createTableQuery = "CREATE TABLE IF NOT EXISTS " + this->table_name + "(" + vars.front();
	if (vars.size() > 2) {
		createTableQuery += ",";
		for (int i = 1; i < vars.size() - 1; ++i) {
			createTableQuery += createTableQuery + ",";
		}
	}
	if (vars.size() > 1) {
		createTableQuery += vars.back();
	}
	createTableQuery += " );";

	int query_status = this->execute(createTableQuery);
	return query_status;
}