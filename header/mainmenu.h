#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_MAINMENU_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_MAINMENU_H

#include <iostream>
#include <string>

#include "Task.h"
#include "TaskList.h"

using namespace std;

class Mainmenu{
    private: 
    TaskList tasks;
    public:
   // Mainmenu();
   void outputmain();
};
class System: public Mainmenu{
    public:
    void settingmenu();

    void collectionoptions();
    
    void taskmenu();


    void screencleared();
};