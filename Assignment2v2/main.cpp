#include <iostream>
#include "User.h"
#include "Player.h"
#include "Admin.h"
#include "MCQ.h"
#include "Question.h"

using namespace std;

int main()
{
	cout << " ********************************************************************************" << endl ;
	cout << " \t\t\t\t\Welcome to Quiz game V2. " << endl ;
    Admin admin ("default","default","admin","Admin","admin");
	Player player  ("default","default","player","player","player");	
	User::switch_accounts();
	return 0;
}
