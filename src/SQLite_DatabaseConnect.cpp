
#include<string>
#include<sqlite3.h>
#include<cstdio>
#include<stdexcept>

#include "../header/SQLite_DatabaseConnect.h"
using namespace std;

DatabaseConnect::DatabaseConnect(string filename) {
	this->database_filename = filename;
	this->connection_check=false;
}
DatabaseConnect::~DatabaseConnect() {

}

bool DatabaseConnect::checkConnection(){
	return this->connection_check;
}

void DatabaseConnect::openConnection(){
	if (this->checkConnection()){
		return;
	}
	else {
		int attempt_connection = sqlite3_open(this->database_filename.c_str(), &this->db);
		if (attempt_connection != SQLITE_OK) {
			//fprintf(stderr, "Can't open database: %s\n");
			//sqlite3_errmsg(this->db);
		} else {
			//fprintf(stdout, "Opened database successfully\n");
			this->connection_check = true;
		}
		return;
	}
}



void DatabaseConnect::closeConnection() {
	if (this->checkConnection()) {

		//automatically deletes the database that db points to and sets it to null
		sqlite3_close(this->db);
		this->connection_check = false;
	}
	return;
}


