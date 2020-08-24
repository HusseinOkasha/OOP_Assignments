
#include "User.h"
#include "Player.h"
#include "Admin.h"
#include <iostream>
#include<vector>

using namespace std;

User::User(){}
User::User(string firstname,string lastname, string username,string role,string password){
      this->FirstName=firstname;
	  this->LastName=lastname;
	  this->UserName=username;
	  this->Role=role;
	  this->Password=password;
}
void User::set_firstname(string firstname){
	this->FirstName=firstname ;
}
void User::set_lastname(string lastname){
	this->LastName=lastname;
}
void User::set_username(string username){
	this->UserName=username;
}
void User::set_role(string role){
	this->Role=role;
}
void User::set_password(string password){
	this->Password=password;
}
string User::get_FirstName(){
    return this->FirstName;
}
string User::get_LastName(){
		return this->LastName;
}
string User::get_UserName(){
		return this->UserName;
}
string User::get_Role(){
		return this->UserName;
}
string User::get_Password(){
		return this->Password;
}
void User::switch_accounts(){
	   int check=0;
	   string name ;
	   string pass ;
	   string role ;
       cout << " ************************************************* "<< endl ;
	   cout << " Welcome to Quiz Game version 2 " << endl ;
       cout << " ************************************************* "<< endl ;
	   cout << " Username: " ;
	   getline(cin,name);
	   cin.ignore();
	   getline(cin,pass);
	   for (int i=0; i<users.size();i++){
		    if (users[i].get_UserName()==name && users[i].get_Password()== pass){
				 role=Users[i].get_Role();
				  check=1;
				  
			}   
	   }
	   if (check==1){
		     if (role=="Admin"){
				Admin a ;
			
			 }
			 else if(role=="Player"){
                  Player p;
			 }
}

string User::update_UserName(){
	     string name ;
		 cout << " Please, Enter Name: " ;
		 getline(cin , string);
		 cin.ignore();
		 this->set_username(name);
		 return name ;

}
bool User::validate(string s  , int lower , int upper ){
       if (s.size()!=1 || int(s[0])<lower || int(s[0])>Upper ){
                return true;
	   }
	   return false;
}
/*User::~User() {
	// TODO Auto-generated destructor stub
}*/




