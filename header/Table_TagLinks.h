#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_TAGLINKS_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_TAGLINKS_H

#include<vector>
#include<string>

#include "../header/Table_Base.h"

class Table_TagLinks : public Table_Base{
	private:
		string table_name = "tag_links";
		string primary_key="tag_link_id";
		vector<string> insert_key = {
				"tag_id","task_id"
		};
	public:
		Table_TagLinks()
		: Table_Base(this->table_name){}
};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_TAGLINKS_H