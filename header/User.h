//
// Created by Alex on 6/12/2023.
//

#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USER_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USER_H

#include<string>

enum class login_status{valid_user, password_invalid, username_invalid};
/**
 * Determines if the username and password are valid. If password invalid user should attempt login again. If username is
 * invalid they should have the option to make a new account.
 */

class User {
	private:
		login_status valid_login;
		int user_id;
		string username;
		string password;
		string user_real_name;

	public:
		User();
		login_status attempt_login(string username, string password);


};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_USER_H