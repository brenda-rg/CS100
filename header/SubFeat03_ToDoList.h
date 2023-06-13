#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SUBFEAT03_TODOLIST_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SUBFEAT03_TODOLIST_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
//include sql class

using namespace std;

class SubFeat03_ToDoList : public SubFeatList {
private:
    vector<int>finished_task;
    string curr_style;
    unordered_map<string style_name, string style_def>list_styles = {
        {"Finished", "[X]"}; 
        {"Unfinished", "[ ]"};
    }

public:
markFinished(int task_pos);
markUnfinished(int task_pos);

protected:

};
#endif

