//
// Created by Alex on 6/12/2023.
//

#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USERBASE_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USERBASE_H

#include<string>
#include<vector>

#include"Task.h"
#include"TaskList.h"

#include"Table_User.h"

enum class login_status{valid_user, password_invalid, username_invalid};
/**
 * Determines if the username and password are valid. If password invalid user should attempt login again. If username is
 * invalid they should have the option to make a new account.
 */

enum class create_new_user_status{created_new_user, bad_username, bad_password};

class UserBase {
	private:
		Table_User user_table;
		login_status valid_login;
		int user_id;
		string username;
		string password;
		string user_real_name;
		TaskList *tasks;

	public:
		UserBase();
		login_status attemptLogin(string username, string password);
		create_new_user_status createNewUser(string username, string password, string real_name);
		void generateUser();


};



#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USERBASE_H