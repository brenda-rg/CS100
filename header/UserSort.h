#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USERSORT_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USERSORT_H

//also include sql class
#include <iostream>
#include <vector>
#include <cstring>
#include "../header/UserSort.h"
#include "../header/TaskList.h"

using namespace std;

class UserSort : public UserBase {
	void getTaskByAlpha(TaskList&);
    void getTaskByChrono(TaskList&);
    void getTaskByPriority(TaskList&);
};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USERSORT_H
