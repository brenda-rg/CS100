#include "../header/InitializeDatabase.h"

#include<string>
#include<vector>
#include<cassert>

#include "../header/SQLite_CreateTable.h"

using namespace std;

int InitializeDatabase::softCreateSettingsTable() {
	SQLite_CreateTable global_table(
			"global_settings",
			this->database_filepath
	);
	vector <string> global_table_vars;
	global_table_vars.push_back("setting_id INTEGER PRIMARY KEY");
	global_table_vars.push_back("setting_name TEXT NOT NULL");
	global_table_vars.push_back("setting_value INTEGER NOT NULL");
	int query_status = global_table.createNewTable(global_table_vars);
	assert(query_status == 0);
	return query_status;
}

int InitializeDatabase::softCreateUserAccTable(){
	SQLite_CreateTable user_acc_table(
			"user_accounts",
			this->database_filepath
			);
	vector<string> user_acc_vars;
	user_acc_vars.push_back("acc_id INTEGER PRIMARY KEY");
	user_acc_vars.push_back("username TEXT UNIQUE");
	user_acc_vars.push_back("password TEXT NOT NULL");
	user_acc_vars.push_back("last_login TEXT");
	user_acc_vars.push_back("failed_login_attempts INTEGER");
	int query_status = user_acc_table.createNewTable(user_acc_vars);
	assert(query_status==0);
	return query_status;
}

int InitializeDatabase::softCreateUserInfoTable(){
	SQLite_CreateTable user_info_table(
			"user_info",
			this->database_filepath
			);
	vector<string> user_info_vars;
	user_info_vars.push_back(
			"user_id INTEGER PRIMARY KEY, "
			"username TEXT UNIQUE, "
			"name TEXT NOT NULL"
			);
	int query_status = user_info_table.createNewTable(user_info_vars);
	assert(query_status==0);
	return query_status;
}

int InitializeDatabase::softCreateCollectionOfTasksTable() {
	SQLite_CreateTable collection_of_tasks_table(
			"collection_of_tasks",
			this->database_filepath
			);
	vector<string> collection_of_tasks_vars;
	collection_of_tasks_vars.push_back(
			"collection_id INTEGER PRIMARY_KEY,"
			"collection_name TEXT NOT NULL,"
			"username TEXT "
			);
	int query_status=collection_of_tasks_table.createNewTable(collection_of_tasks_vars);
	assert(query_status==0);
	return query_status;
}

int InitializeDatabase::softCreateTaskTable() {
	SQLite_CreateTable tasks_table(
			"tasks",
			this->database_filepath
	);
	vector <string> tasks_vars;
	tasks_vars.push_back(
			"task_id INTEGER PRIMARY KEY,"
			"task_name TEXT NOT_NULL,"
			"collection_id INTEGER"
	);
	int query_status = tasks_table.createNewTable(tasks_vars);
	return query_status;
}

int InitializeDatabase::softCreateSubfeatDescTable(){
	SQLite_CreateTable desc_table(
			"subfeat_descriptions",
			this->database_filepath
			);
	vector<string> desc_vars = {
			"subfeat_desc_id INTEGER PRIMARY KEY",
			"origin_task_id INTEGER NOT NULL",
			"display_order INTEGER NOT NULL",
			"desc TEXT NOT NULL"
	};
	int query_status = desc_table.createNewTable(desc_vars);
	assert(query_status==0);
	return query_status;
}

int InitializeDatabase::softCreateSubfeatListTable(){
	SQLite_CreateTable list_table(
			"subfeat_lists",
			this->database_filepath
			);
	vector<string> list_vars = {
			"list_id INT PRIMARY KEY,"
			"origin_task_id INTEGER NOT NULL,"
			"display_order INTEGER NOT NULL,"
			"list_name TEXT NOT NULL,"
			"list_type TEXT NOT NULL,"
			"list_style TEXT NOT NULL"
	};
	int query_status = list_table.createNewTable(list_vars);
	assert(query_status==0);
	return query_status;
}

int InitializeDatabase::softCreateSubfeatListItemTable() {
	SQLite_CreateTable subfeat_list_item_table(
			"subfeat_list_items",
			this->database_filepath
			);
	vector<string> subfeat_list_item_vars = {
			"item_id INTEGER PRIMARY KEY,"
			"origin_list INTEGER NOT NULL,"
			"display_order INTEGER NOT NULL,"
			"date TEXT,"
			"time TEXT,"
			"item_text TEXT,"
			"priority INTEGER"
	};
	int query_status = subfeat_list_item_table.createNewTable(subfeat_list_item_vars);
	assert(query_status==0);
	return query_status;
}

int InitializeDatabase::softCreateSubfeatFormTable() {
	SQLite_CreateTable subfeat_form_table(
			"subfeat_form",
			this->database_filepath
			);
	vector<string> subfeat_form_vars = {
			"form_id INTEGER PRIMARY KEY,"
			"origin_form_id INTEGER NOT NULL,"
			"display_order INTEGER NOT NULL,"
			"form_list_name TEXT NOT NULL"
	};
	int query_status=subfeat_form_table.createNewTable(subfeat_form_vars);
	assert(query_status==0);
	return query_status;
}

int InitializeDatabase::softCreateSubfeatFormItemTable() {
	SQLite_CreateTable subfeat_form_item_table(
			"subfeat_form_item",
			this->database_filepath
			);
	vector<string> subfeat_form_item_vars = {
			"form_item_id INTEGER PRIMARY KEY,"
			"origin_form_id INTEGER NOT NULL,"
			"form_name TEXT NOT NULL,"
			"form_text TEXT NOT NULL"
	};
	int query_status=subfeat_form_item_table.createNewTable(subfeat_form_item_vars);
	assert(query_status==0);
	return query_status;
}


int InitializeDatabase::softCreateSubfeatTagsTable() {
	SQLite_CreateTable subfeat_tags_table(
			"subfeat_tags",
			this->database_filepath
	);
	vector<string> subfeat_tags_vars={
			"tag_id INTEGER PRIMARY KEY,"
			"origin_task_id INTEGER NOT NULL,"
			"display_order INTEGER NOT NULL,"
			"tag TEXT NOT NULL"
	};
	int query_status=subfeat_tags_table.createNewTable(subfeat_tags_vars);
	assert(query_status==0);
	return query_status;
}

int InitializeDatabase::softCreateAllTables(){
	int settings_table_status = this->softCreateSettingsTable();
	int user_acc_table_status = this->softCreateUserAccTable();
	int user_info_table_status = this->softCreateUserInfoTable();
	int collection_of_tasks_table_status = this->softCreateCollectionOfTasksTable();
	int task_table_status = this->softCreateTaskTable();
	int subfeat_desc_table_status = this->softCreateSubfeatDescTable();
	int subfeat_list_table_status=this->softCreateSubfeatListTable();
	int subfeat_list_item_table_status = this->softCreateSubfeatListItemTable();
	int subfeat_form_table_status=this->softCreateSubfeatFormTable();
	int subfeat_form_item_table_status= this->softCreateSubfeatFormItemTable();
	int subfeat_tags_table_status=this->softCreateSubfeatTagsTable();
	int create_all_tables_status=(settings_table_status + user_acc_table_status + user_info_table_status
			+ collection_of_tasks_table_status + task_table_status + subfeat_desc_table_status + subfeat_list_table_status
			+ subfeat_list_item_table_status + subfeat_form_table_status + subfeat_form_item_table_status +
			subfeat_tags_table_status);
	assert(create_all_tables_status==0);
	return create_all_tables_status;
}