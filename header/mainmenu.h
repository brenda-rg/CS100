#ifndef MAINMENU_H
#define MAINMENU_H

#include <iostream>
#include <string>

#include "../header/Task.h"
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
};
class User: public MainMenu{
    public:
    void loginscreen();
};
class collection: public MainMenu{
    public:
    void collectionoptions();
};
class task: public MainMenu{
    public:
    void taskmenu();
};
class screencleared: public MainMenu {
    public:
    void screencleared();
}
