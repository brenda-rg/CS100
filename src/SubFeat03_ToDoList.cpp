#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SUBFEAT03_TODOLIST_CPP

#include "../header/SubFeat03_ToDoList.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

//make vector of finished or not
//string vector of outputs

SubFeat03_ToDoList::markFinished(int task_pos){
    finished_task.at(task_pos) = 1;
    fin_output.at(task_pos) = "[X]";
    
}

SubFeat03_ToDoList::markUnfinished(int task_pos){
    finished_task.at(task_pos) = 0;
    fin_output.at(task_pos) = "[ ]";
}

#endif