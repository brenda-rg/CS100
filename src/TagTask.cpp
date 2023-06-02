#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAGTASK_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAGTASK_H

//also include sql class
#include <list>
#include "../header/DateTimeTask.h"
#include "../header/Tag.h"
using namespace std;
list<Tag> tags;
int tagListSize;

TagTask() {

}

TagTask(TaskBase*) {

}
//modifiers
void add_tag(string);
void delete_tag(string);
//accessors
void display_tags();
int find_tag(string);


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAGTASK_H
