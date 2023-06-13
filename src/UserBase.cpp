
#include "../header/UserBase.h"

#include<vector>
#include<string>

#include "../header/Task.h"
#include "../header/Table_Task.h"
#include "../header/Table_User.h"
#include "../header/TaskList.h"

using namespace std;

login_status UserBase::attemptLogin(string username, string password){
	string where_cond = "(username = " + username + ") AND ( password = " + password + ");";
	this->user_table.select("*", where_cond);
	if (this->user_table.getSize()==0) {
		return login_status::username_invalid;
	} else {
		bool valid_username = (this->user_table.getDataValue(0,2) == username);
		bool valid_password = (this->user_table.getDataValue(0,3) == password);
		if (!valid_username) {
			return login_status::username_invalid;
		} else if (!valid_password) {
			return login_status::password_invalid;
		} else {
			this->username=username;
			this->password=password;
			this->generateUser();
			return login_status::valid_user;
		}
	}
}

void UserBase::generateUser() {
	this->tasks = new TaskList(this->username);
}