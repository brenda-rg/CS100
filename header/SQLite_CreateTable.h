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

class SQLite_CreateTable::public SQLite_BaseTable {
	public:
		// accepts variables to be made with the table using SQL syntax
		void createNewTable(string table_name, vector<string> vars);
};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SQL_CREATETABLE_H
