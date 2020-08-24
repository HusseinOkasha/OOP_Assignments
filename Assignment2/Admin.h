#ifndef ADMIN_H
#define ADMIN_H
#include<iostream>
#include <vector>
#include "User.h"
using namespace std;
class Admin: public User
{
	
public:
    void admin_main_menu();
	/*void veiw_all_users();
	void add_new_user();
	void veiw_all_questions();
	void add_new_question();
	void load_questions();*/
	Admin(string firstname,string lastname,string username, string role, string password);
	Admin();
	~Admin();

};

#endif // ADMIN_H
