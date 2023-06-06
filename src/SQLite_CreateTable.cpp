
#include<string>
#include<sqlite3>
#include<cstdio>
#include<stdexcept>

#include "../header/SQLite_CreateTable.h"

using namespace std;

// https://www.tutorialspoint.com/sqlite/sqlite_c_cpp.htm


void SQLite_BaseTable::createNewTable(string table_name, vector<string> vars) {
	if (!(this->connection_check)){
		this->openConnection();
	}
	if (vars.sz() < 1) {
		throw invalid_argument("Variable Vector for Table Creation has a size less than one");
	}

	string createTableQuery = "CREATE TABLE IF NOT EXISTS " + table_name + "(" + vars.front();
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
	int attempt_TableCreation = sqlite3_exec(this->db, createTableQuery, nullptr, 0, &errorMessage);
	if (attempt_TableCreation!=SQLITE_OK) {
		// cout << "Error creating table: " << errorMessage << std::endl;
		sqlite3_free(errorMessage);
	}
	this->closeConnection();
}