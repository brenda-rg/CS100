#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_MAINMENU_CPP
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_MAINMENU_CPP

using namespace std;

#include <iostream>
#include "../header/mainmenu.h"

void MainMenu::outputmain()
{
    int option;
    string name;
    while (true){
    screencleared();
    cout << "Welcome to Kooala!" << endl; 
    cout << "Please select one of the following options: " << endl;
    cout << "1. View Task Scheduler " << endl;
    cout << "2. View Collections" << endl;
    cout << "3. Settings" << endl;
    cout << "4. Exit" << endl;
cin >> option;

while ((option != 1) && (option != 2) && (option != 3)) {
        cout << "Error! Input option 1,2, or 3"<< endl;
         cin.clear();
         cin.ignore(100, '\n');
        cin >> option;
   }

    }
}
switch (option){
case 1:
cout << "Name Your Task: " 
cin.clear();
cin.ignore(1000, '\n');
getline(cin, TaskBase);
break;
}

case 2: 

break; 

case 3:
settingmenu();
break; 

case 4:
cout << "Kooala Task Terminated" << endl;
exit(0);
break; 

void mainmenu::settingmenu(){

    cout << "Settings" << endl;
    cout << "1. Turn on order list" << endl; 
    cout << "2. Turn off ordered list" << endl;
  
}

void mainmenu::taskmenu(){

    cout << "1. Add task" << endl;
    cout << "2. Delete Task" << endl;
    cout << "3. Edit name" << endl;
}

void mainmenu::screencleared(){

   cout << "\x1B[2J\x1B[H";

}