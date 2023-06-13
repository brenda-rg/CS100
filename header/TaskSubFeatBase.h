#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKSUBFEATBASE_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TASKSUBFEATBASE_H

#include <iostream>
#include <string>
//include sql class

using namespace std;

class TaskSubFeatBase {
protected:
    int displayOrder;
    string origin_username;
public:
    //void output_subfeat();
    int changeDisplayOrder(int newOrder);
    TaskSubFeatBase(string username, string SubfeatName);
private:
    
};


#endif