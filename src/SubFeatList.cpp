#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SubFeatList_CPP
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SubFeatList_CPP

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
//include sql class

void SubFeatList::addListItem(string listItem){
subformListEntries.push_back(listItem);
}

void SubFeatList::switchOrder(int pos_1, int pos_2){
vector<*PriorityTask>temp = {};

vector<*PriorityTask>temp.push_Back(subformListEntries.at(pos_2));

subformListEntries.at(pos_2) = subformListEntires.at(pos_1);

subformListEntries.at(pos_1) = temp;
}

void SubFeatList::changeListStyle(string new_style){
    curr_style = new_style;
}

#endif