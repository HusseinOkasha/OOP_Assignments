
#include "User.h"
#include "Player.h"
#include "Admin.h"
#include <iostream>
#include <vector>

using namespace std;
vector <Admin>User::admins;
vector <Player>User::players;
vector <User>User::users;
User::User(){
			this->FirstName="Unknown";
	  this->LastName="Unknown";
	  this->UserName="Unknown";
	  this->Role="Unknown";
	  this->Password="Unknown";	
}
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
	   int check=0, index=0;
	   string name ;
	   string pass ;
	   string role ;
       cout << " ************************************************************************ "<< endl ;
	   
	   cout << " UserName:" ;
	   getline(cin,name);
	   cout << " Password:";
	   getline(cin,pass);
	  
	   for (int i=0; i<admins.size();i++){
		    if (admins[i].get_UserName()==name && admins[i].get_Password()== pass){
				  check=1;
				  index=i;
		    }
	   }	
	   for (int i=0; i<players.size();i++){
			if (players[i].get_UserName()==name && players[i].get_Password()== pass)  {
			       check=2;	 
				   index=i;
			} 
	   }
	   if (check==2){
		      players[index].player_main_menu();      
		}
		else if (check==1){
			   admins[index]. admin_main_menu();	
		}
		else {
		       cout << " invalid username or password" << endl ;	
		}
	   
	   
}
 string User::update_UserName(){
	     string name ;
		 cout << " Please, Enter Name: " ;
		 getline(cin , name);
		 cin.ignore();
		 this->set_username(name);
		 return name ;

}
bool User::validate(string s  , int lower , int upper ){
	
       if (s.size()!=1 || int(s[0])-48<lower || int(s[0])-48>upper ){
                return true;
	   }
	   return false;
}
bool User::validate2(string s , char x, char y){
	    char a=char(int (s[0]+32))  ;
        if (s.size()>1 || (( s[0]!=x && s[0] !=y) && (a!=x && a!=y) ) ){
		     return true ;	
		}
     return false;	
}
bool User::validate3(string s ,char x , char y ){
		 int lower_capital=int (x)-32;
         int upper_capital=int (y)-32;
		 int lower_small=int (x);
         int upper_small=int (y);
		 int choice = int (s[0]);
		 if (s.size()>1 || ( (choice>upper_capital || choice<lower_capital) && (choice>upper_small || choice<lower_small) )){
									return true ;
		}
		 
		return false;
}
bool User::search(vector <User> users , string x  ){
	    
	 for (int i=0; i<users.size();i++){
				if (users[i].get_UserName()== x ){
					  
	                   return true ;  				 
	 			}	 
	 }
	return false ;
         
          			
}
bool operator ==(const User &x , const User &y){
	        if (x.UserName== y.UserName){
				   return true ;
			}
	return false;		
}
ostream& operator<<(ostream &out ,const User &x ){
                out << " "<< x.FirstName << "\t" << x.LastName << "\t" << x.UserName  << "\t\t"<<x.Role;
				return out ;
}

/*User::~User() {
	// TODO Auto-generated destructor stub
}*/






