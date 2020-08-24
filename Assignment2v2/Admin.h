#ifndef ADMIN_H
#define ADMIN_H
#include "User.h"
#include "MCQ.h"
#include "Complete.h"
#include "TrueOrFalse.h"
#include <iostream>
using namespace std;
class Admin : public User 
{
private:
  
public:
	void admin_main_menu();
	void veiw_all_users();
	void add_new_user();
	void veiw_all_questions( vector<MCQ>mcqs , vector<TrueOrFalse>TorF , vector<Complete>complete);
	void add_new_question();
	void add_mcq();
	void add_TorF();
	void add_complete();
	void load_questions();
	void read_mcq( ifstream &Questions);
	void read_complete( ifstream &Questions);
	void read_TorF( ifstream &Questions);
	Admin(string firstname,string lastname,string username, string role, string password);
	Admin();
	~Admin();

};

#endif // ADMIN_H
