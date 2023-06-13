#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_USER_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_USER_H

#include"../header/Table_Base.h"

#include<string>
#include<vector>

using namespace std;

class Table_User: public Table_Base {
	protected:
		string table_name = "user_accounts";
		string primary_key = "acc_id";
		vector<string> insert_key = {
				"origin_username", "password"
		};
};



#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_USER_H