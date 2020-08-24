#include "Admin.h"
#include<iostream>
#include <vector>
#include "User.h"
using namespace std;

Admin::Admin()
{
}
Admin::Admin(string firstname,string lastname,string username, string role, string password)
:User(firstname, lastname , username , role , pass){
              
}
void Admin::admin_main_menu(){
	    string choice ;
	    cout << " Welcome " << this->get_UserName() << "(Admin)"<< ",please choose from the following options:"<<endl ;
        cout << "\t[1] Switch accounts\n\t[2] Update your name\n\t[2] View all users\n\t[3] Add new user\n\t[4] View all questions\n\t[5] Add new question\n\t[6] Load questions from file\n\t[7] Exit the program"<< endl ;
		cout << " My choice:" ;
		cin >> choice ;
		while(this->validate(choice ,1 ,7 )){
			    cout << " **************************************** " << endl ;
		        cout << " Please Enter number in range [1,7] " << endl ;	
				cin >> string ;
	    }
		if (choice[0]=='1'){
		     this->switch_accounts();	
		}
		else if (choice[0]=='2'){
			  this->update_UserName();
		}
		
   	 
}
Admin::~Admin()
{
}

