#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_SUBFEATDESC_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_SUBFEATDESC_H

#include<string>
#include<vector>

#include "../header/Table_Base.h"

using namespace std;

class Table_SubfeatDesc : public Table_Base {
	private:
		string table_name = "subfeat_desc";
		string primary_key = "desc_id";
		const vector<string> insert_key = {
				"origin_task_id","display_order","desc"
		};
		const vector<string> column_name = {
				"desc_id","origin_task_id","display_order","desc"
		};

	public:
		Table_SubfeatDesc()
		: Table_Base(this->table_name) {}
};

#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TABLE_SUBFEATDESC_H