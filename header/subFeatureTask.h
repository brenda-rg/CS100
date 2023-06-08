#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SUBFEATURETASK_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SUBFEATURETASK_H

#include <iostream>
#include <string>
//include sql class

using namespace std;

class subFeatureTask {
protected:

public:
    void addDesc();

    void addOrderedList();
    void addUnorderedList();
    void addToDoList();
    void addForm();

private:
    const int limit_per_subfeat = 50;
    

};

#endif