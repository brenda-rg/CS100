#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SUBFEATURETASK_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SUBFEATURETASK_H

#include <iostream>
#include <string>
//include sql class

using namespace std;

class Task: public subFeatureTask {
protected:

public:
    void addDesc();
    void addOrderedList();
    void addUnorderedList();
    void addToDoList();
    void addForm();

private:
//need sub
    const int limit_per_subfeat = 50;
    vector<*SubFeat04_Form>subfeat_04;
    vector<*SubFeat03_ToDoList>subfeat_03;
    vector<*SubFeat02_UnorderedList>subfeat_02;
    vector<*SubFeat01_OrderedList>subfeat_01;
    vector<*SubFeat00_Desc>subfeat_00;

};

#endif