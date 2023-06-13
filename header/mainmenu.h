#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_MAINMENU_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_MAINMENU_H

#include <iostream>
#include <string>

#include "../header/TaskBase.h"
#include "../header/TaskList.h"

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

    void password_Validation(string& new_password);

    void screencleared();
};

#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_MAINMENU_H