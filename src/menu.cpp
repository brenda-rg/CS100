#ifndef MAIN_CPP
#define MAIN_CPP
#include <iostream>

using namespace std;


#include ".../header/mainmenu.hpp"
#include ".../header/task.h"

int main(){
    cout << "Welcome to Kooala!" << endl; 
    cout << "Please select one of the following options: " << endl;
    cout << "1. View Task list" << endl;
    cout << "2. Settings Menu" << endl;
    cout << "3. Exit" << endl;


int option;
cin >> option;

while ( (option != 1) && (option != 2) && (option != 3)) {
        cout << "Error! Input option 1,2, or 3"<< endl;
        cin.clear();
        cin.ignore(100, '\n');
        cin >> option;
    }
while (option == 1 || option == 2 || option == 3){
 while(option == 1){
     cout << "Task list is: " << endl;
     //call functions 
     break;
 }

 while(option == 2){
     cout << "Settings Menu" << endl;
     //call functions
     break;

 }
 while(option == 3){
    cout << "Successfully Exited" << endl;
    //call functions
    break;
 }
 cin >> option; 
}
return 0;
}
