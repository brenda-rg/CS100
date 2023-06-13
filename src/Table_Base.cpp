#include "../header/Table_Base.h"

#include <string>

using namespace std;

int Table_Base::getFullTableSize() {
	this->select("MAX(" + this->primary_key + ")");
	int table_sz = this->data[0][0];
	return table_sz;
}