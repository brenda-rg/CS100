#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_MAINMENU_CPP
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_MAINMENU_CPP

using namespace std;
#include <bits/stdc++.h> 
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
    cout << "1. Login" << endl;
    cout << "2. New Login" << endl;
    cout << "3. View Task Schedule " << endl;
    cout << "4. Edit Task Options" << endl;
    cout << "5. View Collections" << endl;
    cout << "6. Settings" << endl;
    cout << "7. Exit" << endl;
cin >> option;

while ((option != 1) && (option != 2) && (option != 3)&& (option != 4) && (option != 5) && (option != 6) && (option != 7)) {
        cout << "Error! Input option 1,2,3,4,5,6 or 7"<< endl;
         cin.clear();
         cin.ignore(1000, '\n');
        cin >> option;
   }

    }

switch (option){
    
case 1:
password_Validation(User::login_status = User.attemptLogin(inputted_user, inputted_pwd))
break;

case 2: 
    cout << "Welcome to Kooala Login Screen" << endl;
    cout << "Please enter a password that contains: " << endl;
    cout << "1. An uppercase letter" << endl;
    cout << "2. A lowercase letter \n";
    cout << "3. A Number" << endl;
    string new_password;
    getline(cin, new_password);
    password_Validation(new_password);

break;

case 3:
cout << "Name Your Task: " 
cin.clear();
cin.ignore(1000, '\n');
getline(cin, name);
break;
}
case 4:
taskmenu(); 
break; 

case 5: 
cout << "Task Colllection View Below:"
//task collection function 
//collectionoption(); here if we get to it
break; 

case 6:
settingmenu();
break; 

case 7:
cout << "Kooala Task Terminated" << endl;
exit(0);
break; 
}

void mainmenu::settingmenu(){

    cout << "Settings" << endl;
    cout << "1. Turn on order list" << endl; 
    cout << "2. Turn off ordered list" << endl;
    cin >> option;
    while ((option != 1) && (option != 2)) {
        cout << "Error! Input option 1,2, or 3"<< endl;
         cin.clear();
         cin.ignore(1000, '\n');
        cin >> option;
   }
  
}

void mainmenu::taskmenu(){

    cout << "1. Add task" << endl;
    cout << "2. Delete Task" << endl;
    cout << "3. Edit name" << endl;
    cin >> option;
    while ((option != 1) && (option != 2) && (option != 3)) {
        cout << "Error! Input option 1,2, or 3"<< endl;
         cin.clear();
         cin.ignore(1000, '\n');
        cin >> option;
   }
}

void mainmenu::screencleared(){

   cout << "\x1B[2J\x1B[H";

}
//if a user is new password validitation 
 void password_Validation(string& new_password) {
       
    bool contains_lowercase = false;
    bool contains_uppercase= false;
    bool contains_number = false; 
    int length = new_password.length();   
    //checking for digit, number, uppercase function
    for (int i = 0; i < length; i++) { 
        if (islower(new_password[i])) 
            contains_lowercase = true; 
        if (isupper(new_password[i])) 
            contains_uppercase = true; 
        if (isdigit(new_password[i])) 
            contains_number = true; 
    }    

   if (length >= 7 && contains_uppercase && contains_lowercase){
    cout << "Password is strong" << endl;
    cout << "Password has been successfully set!" << endl;
   }
    else if (length <= 6) {
        cout << "Password is weak. Please Re-enter password: "; 
    }
 else{
    cout << "Invalid Password. Re-enter Password" << endl;
 }
 }
 //password validation for user class
password_Validation(User::login_status = User.attemptLogin(inputted_user, inputted_pwd)){
     //std::string status;
     //std::cin >> status;
   switch(status){
    case(login_status::valid_user){
    cout << "Loging in..." << endl; 
    break;
     }
    case(login_status::password_invalid){
    cout << "Invalid Password." << endl;
    cout << "Re-enter Password:" << endl;
    break;
     }
 }
}
