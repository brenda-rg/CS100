#include "../header/SQLite_ReadTable.h"

#include<string>
#include<sqlite3.h>
#include<vector>
#include<stdexcept>
#include<assert.h>

#include"../header/SQLite_DatabaseConnect.h"

using namespace std;

//static int c_callback(void *param, int argc, char **argv, char **azColName) {
//	SQLite_ReadTable::SQLite_ReadTable* table = reinterpret_cast<SQLite_ReadTable::SQLite_ReadTable
//}
// int SQLite_ReadTable::callback(void *data, int argc, char **argv, char **azColName) {

int callback(void *object, int argc, char **argv, char **azColName) {
	if (SQLite_ReadTable* table = static_cast<SQLite_ReadTable*>(object)) {
		table->sql_log_data.push_back(object);
		table->value_counts.push_back(argc);

		vector <string> row_val;
		vector <string> column_name;
		string converted_val;
		string converted_column_name;
		for (int i = 0; i < argc; ++i) {
			converted_val = argv[i] ? argv[i] : "NULL";
			converted_column_name = azColName[i];
			row_val.push_back(converted_val);
			column_name.push_back(converted_column_name);
		}
		table->data.push_back(row_val);
		table->col_names.push_back(column_name);
	}
	return 0;
}

int SQLite_ReadTable::execute(string sql_query, bool use_callback = false){
	if (!(this->checkConnection())){
		this->openConnection();
	}

	char *zErrMsg = 0;
	//const char* data = "Callback function called";

	int query_status = sqlite3_exec(
			this->db, sql_query.c_str(), callback,
			static_cast<void*>(this), &zErrMsg
			);
	assert(query_status==0);
	this->sqlite_query_status.push_back(query_status);
	// https://www.sqlite.org/rescode.html

	string error_message = zErrMsg ? zErrMsg : "NULL";
	this->error_messages.push_back(error_message);

	if (this->checkConnection()){
		this->closeConnection();
	}
	return query_status;
}

int SQLite_ReadTable::selectAll() {
	this->dumpData();
	string sql_cmd = "SELECT * FROM " + this->table_name + ";";
	int query_status = this->execute(sql_cmd, true);
	return query_status;
}

int SQLite_ReadTable::select(string col_names, string query_filter="") {
	this->dumpData();
	string sql_cmd = "SELECT " + col_names + " FROM " + this->table_name;
	if (query_filter=="") {
		sql_cmd+=";";
	} else {
		sql_cmd+=" WHERE " + query_filter + ";";
	}
	int query_status = this->execute(sql_cmd, true);
	return query_status;
}

int SQLite_ReadTable::dumpData() {
	this->data.clear();
	this->col_names.clear();
	this->value_counts.clear();
	this->sql_log_data.clear();
	this->error_messages.clear();
	return;
}

vector<vector<string>> SQLite_ReadTable::getData() {
	return this->data;
}

vector<vector<string>> SQLite_ReadTable::getColNames() {
	return this->col_names;
}

vector<int> SQLite_ReadTable::getValueCounts() {
	return this->value_counts;
}

vector<void*> SQLite_ReadTable::getLogData() {
	return this->sql_log_data;
}