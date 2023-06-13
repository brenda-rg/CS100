#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_PRIORITYTASK_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_PRIORITYTASK_H

//also include sql class
#include <iostream>
#include <vector>
#include "TagTask.h"

using namespace std;

class PriorityTask : public TagTask {
	protected:
        int priority;

		public:
        //constuctors
        PriorityTask();
        PriorityTask(TagTask*);
        ~PriorityTask();

        //modifiers
        void set_priority(int);
        void remove_priority();

        //accessors
        int get_priority();
};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_PRIORITY_H