#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAGTASK_CPP
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAGTASK_CPP

//also include sql class
#include <iostream>
#include "TagTask.h"
using namespace std;

class TagTask : public DateTimeTask {
	protected:
		list<Tag> tags;
        int tagListSize;

		public:
        //constuctors
        TagTask();
        TagTask(TaskBase*);
        //modifiers
        void add_tag(string);
        void delete_tag(string);
        //accessors
        void display_tags();
        int find_tag(string);

};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAGTASK_H
