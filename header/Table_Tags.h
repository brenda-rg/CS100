#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_TAGS_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_TAGS_H

#include<string>
#include<vector>

#include "../header/Table_Base.h"

class Table_Tags: public Table_Base {
	private:
		string table_name = "tags";
		string primary_key = "tag_id";
		vector<string> insert_key = {
				"origin_username","tag"
		};

	public:
		Table_Tags()
		: Table_Base(this->table_name){}

};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_TAGS_H