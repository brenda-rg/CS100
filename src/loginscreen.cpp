#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

 void password_Validation(string& new_password) {
 
       
    bool contains_lowercase = false;
    bool contains_uppercase= false;
    bool contains_number = false; 
    int length = new_password.length();   

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


password_Validation(User::login_status = User.attemptLogin(inputted_user, inputted_pwd){
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
