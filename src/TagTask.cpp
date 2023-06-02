#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAGTASK_CPP
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAGTASK_CPP

const int MAX_SIZE = 10;
//also include sql class
#include <vector>
#include "../header/TagTask.h"
#include "../header/DateTimeTask.h"
#include "../header/Tag.h"

using namespace std;

TagTask::TagTask() {
    this->tags_size = 0;
}

TagTask::TagTask(TaskBase* oldTask)  {
    this->tags_size = 0;
    this->task_name = oldTask->get_name();
}

TagTask::~TagTask() {}

//modifiers
void TagTask::add_tag(string name) {
    Tag newTag = Tag(name);
    if(this->tags_size < MAX_SIZE) {
        this->tags.push_back(newTag);
        ++(this->tags_size);
    }
    //remove when figure out i/o stuff
    else {
        throw out_of_range("Too many tags, please delete one before adding");
    }
}

void TagTask::delete_tag(string name) {
    for (vector<Tag>::iterator it = tags.begin(); it != tags.end();)
    {
        if (name == it->get_tag()){
            it = tags.erase(it);
            if(tags_size > 1) {
                --(this->tags_size);
            }
            else {
                this->tags_size = 0;
            }
        }
        else {
            ++it;
        }
    }
}
//accessors
void TagTask::display_tags() {
    for(int i = 0; i < tags_size; ++i) {
        cout << "TAGS: " 
        << tags.at(i).get_tag()
        << " ";
    }
    cout << endl;
}

int TagTask::find_tag(string) {
    return -1;
}


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAGTASK_CPP
