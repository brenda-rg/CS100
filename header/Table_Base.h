#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_BASE_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_BASE_H

#include<string>
#include<vector>

#include "../header/SQLite_WriteTable.h"


using namespace std;

class Table_Base :public SQLite_WriteTable{
	protected:
		string kooala_database_filepath="../bin/KooalaDatabase.db";
		string primary_key;
		vector<string> insert_key;

	public:
		Table_Base(string table_name)
		: SQLite_WriteTable(table_name, this->kooala_database_filepath){}

		int getFullTableSize();
		vector<string> getInsertKey() {return this->insert_key;}
};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_BASE_H