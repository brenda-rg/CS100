#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_INITIALIZEDATABASE_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_INITIALIZEDATABASE_H

#include<string>

using namespace std;

class InitializeDatabase {
	private:
		string database_filepath;

	public:
		InitializeDatabase(string database_filepath) {
			this->database_filepath=database_filepath;
		}
		int softCreateSettingsTable();
		int softCreateUserAccTable();
		int softCreateUserInfoTable();
		int softCreateCollectionOfTasksTable();
		int softCreateTaskTable();
		int softCreateSubfeatDescTable();
		int softCreateSubfeatListTable();
		int softCreateSubfeatListItemTable();
		int softCreateSubfeatFormTable();
		int softCreateSubfeatFormItemTable();
		int softCreateTagsTable();
		int softCreateTagLinksTable();
		int softCreateAllTables();

};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_INITIALIZEDATABASE_H