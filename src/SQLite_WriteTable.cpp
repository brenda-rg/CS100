#include "../header/SQLite_WriteTable.h"

#include<string>
#include<sqlite3.h>
#include<vector>
#include<assert.h>


using namespace std;

int SQLite_WriteTable::insert(string row_values, string column_names , string other_flags ) {
	string query = "INSERT INTO " + this->table_name + " (" + column_names + ")" + " VALUES( " + row_values + ") ";
	if (other_flags!="") {
		query+=other_flags;
	}
	query+=";";

	int query_status = this->execute(query);
	return query_status;
}

int SQLite_WriteTable::insertMany(vector<string> row_values, string column_names, string other_flags){
	assert(row_values.size()>0);
	string sql_query = "INSERT INTO " + this->table_name + " (" + column_names + ") " + " VALUES(" + row_values[0];
	if (row_values.size()>1) {
		for (int i = 1; i < row_values.size() - 1; ++i) {
			sql_query += row_values[i] + ",";
		}
		sql_query+=row_values.back();
	}
	sql_query+=")";
	if (other_flags!=")"){
		sql_query+= " " + other_flags;
	}
	sql_query+=";";
	int query_status= this->execute(sql_query);
	return query_status;
}

int SQLite_WriteTable::update(string new_val, string column_name, string where, string other_flags){
	string query="UPDATE " + this->table_name + " SET" + column_name + " WHERE " + where;
	if (other_flags!=""){
		query+=other_flags;
	}
	query+=";";
	int query_status=this->execute(query);
	return query_status;
}

int SQLite_WriteTable::remove(string search_conditions, string other_flags){
	string query="DELETE FROM " + this->table_name + " WHERE " + search_conditions;
	if (other_flags!="") {
		query+=other_flags;
	}
	query+=";";
	int query_status=this->execute(query);
	return query_status;
}