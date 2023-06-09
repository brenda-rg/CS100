#include "../header/SQLite_CreateTable.h"

#include<string>
#include<sqlite3>
#include<cstdio>
#include<stdexcept>
#include<assert.h>


using namespace std;

// https://www.tutorialspoint.com/sqlite/sqlite_c_cpp.htm


void SQLite_CreateTable::createNewTable(vector<string> vars) {
	assert(vars.sz()>0);

	string createTableQuery = "CREATE TABLE IF NOT EXISTS " + this->table_name + "(" + vars.front();
	if (vars.sz() > 2) {
		createTableQuery += ","
		for (int i = 1; i < vars.sz() - 1; ++i) {
			createTableQuery += createTableQuery + ",";
		}
	}
	if (vars.sz() > 1) {
		createTableQuery += vars.back();
	}
	createTableQuery += " );";

	string errorMessage;


	int query_status = this->execute(createTableQuery)
}

bool SQLite_CreateTable::checkExist() {
	string sql_query = "select count(type) from sqlite_master where type='table' and name='" + this->table_name +"';";
	this->execute(sql_query);
}