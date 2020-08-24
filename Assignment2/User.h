#ifndef USER_H_
#define USER_H_
#include "Player.h"
#include "Admin.h"
#include <iostream>
using namespace std;

class User {
private:
	 string FirstName;
	 string LastName;
	 string UserName;
	 string Role;
	 string Password;
//protected:


public:

	void set_firstname(string firstname);
	void set_lastname(string lastname);
	void set_username(string username);
	void set_role(string role);
	void set_password(string password);
	string get_FirstName();
	string get_LastName();
	string get_UserName();
	string get_Role();
	string get_Password();
	void switch_accounts();
    string update_UserName();
	bool validate(string s , int lower, int upper  );
    User();
	User(string firstname,string lastname, string username,string role,string password);
	//virtual ~User();
};

#endif /* USER_H_ */
