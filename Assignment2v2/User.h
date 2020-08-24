#ifndef USER_H
#define USER_H
#include <iostream>
#include <vector>
//#include<Player.h>
//#include <Admin.h>
class Admin;
class Player;
using namespace std;
class User
{
private:
	 string FirstName;
	 string LastName;
	 string UserName;
	 string Role;
	 string Password;
	 
protected:
       static vector<User>users;
public:
    static vector <Admin> admins;
	static vector <Player> players;
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
	string update_UserName();
	static void switch_accounts(); // static because by this function we are going to change from object to another ("From user to another")
	friend bool operator ==(const User &x , const User &y);
	friend ostream& operator<<(ostream &out ,const User &x );
	friend istream& operator >> (istream &in ,const User &x);
	bool validate3(string s ,char x , char y );
	static bool search(vector <User> users , string x  ); // this function searches for x (first name , last name , .... ) in vector admins static bool validate(string s , int lower, int upper  ); // static because it doesn't affect the object it only does validation on user inputs  
	static bool validate2(string s , char x , char y );
	static bool validate(string s  , int lower , int upper );
    User();
	User(string firstname,string lastname, string username,string role,string password);
	//virtual ~User();
};

#endif // USER_H
