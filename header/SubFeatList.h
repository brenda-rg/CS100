#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SubFeatList_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SubFeatList_H

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
//include sql class

using namespace std;

class SubFeatList {
protected:
    int vector<*PriorityTask>subformListEntries;
    string curr_style;
public:
    void addListItem(string);
    void switchOrder(int pos_1, int pos_2);
    void changeListStyle(string new_style);
private:
    int list_id;
    string list_name;
    map<string style_name, string style_def>list_styles = 
    {string, string};
};

#endif