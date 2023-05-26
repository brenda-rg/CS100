#include <iostream>
#include "../header/TaskBase.h"
#include "../header/DateTimeTask.h"

using namespace std;

int main(){

	TaskBase task1 = TaskBase("name");

	cout << "Task: " << task1.get_name() << " " << task1.get_id() << endl;

	return 0;
};