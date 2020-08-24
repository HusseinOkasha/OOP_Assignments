#include "Admin.h"
#include "User.h"
#include "Player.h"
#include "MCQ.h"
#include <TrueOrFalse.h>
#include "Complete.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Admin::Admin()
{
	
}

Admin::~Admin()
{
	
}

Admin::Admin(string firstname,string lastname,string username, string role, string password)
:User(firstname, lastname , username , role , password){
               if (search(User::users,username )==true ){
				            cout << " This UserName is already used...." << endl;
				}
				else {
					admins.push_back(*(this));
					users.push_back(*(this));
				}
}
void Admin::admin_main_menu(){
	    string choice ;
	    cout << " Welcome " << this->get_UserName() << "(Admin)"<< ",please choose from the following options:"<<endl ;
        cout << "\t[1] Switch accounts\n\t[2] Update your name\n\t[3] View all users \n\t[4] Add new user\n\t[5] View all questions\n\t[6] Add new question\n\t[7] Load questions from file\n\t[8] Exit the program"<< endl ;
		cout << " My choice:" ;
		cin >> choice ;
		while(validate(choice ,1 ,8)){
			    cout << " **************************************** " << endl ;
		        cout << " Please Enter number in range [1,8] " << endl ;	
				cin >> choice ;
	    }
		if (choice[0]=='1'){
				cin.ignore();
		       switch_accounts();	
			   admin_main_menu();
		}
		else if (choice[0]=='2'){
			 update_UserName();
			 admin_main_menu();
		}
		else if (choice[0]=='3'){
			  this->veiw_all_users();
			  admin_main_menu();
		}
		else if (choice[0]=='4'){
			  this->add_new_user();
			  admin_main_menu();
		}
		else if (choice[0]=='5'){
			    veiw_all_questions( MCQ::mcqs , TrueOrFalse::TorF , Complete::complete );
				admin_main_menu();
		}
		else if (choice[0]=='6'){
			  add_new_question();
			  admin_main_menu();
		}
		else if (choice[0]=='7'){
		      load_questions(); 
			  admin_main_menu();
		}
        		
   	 
}
void Admin::veiw_all_users(){
	   string choice ;
	   cout << " Existing admins in the system:\n First name \t last name \tUsername \tRole\n";
	   for(int i=0; i<admins.size(); i++){
		     cout << admins[i] << endl ;
	   }
	   cout << " ====================================== " << endl ;
	   cout << " Existing admins in the system:\n First name \t last name \tUsername \tRole\n";
	   for(int i=0; i<Player::players.size(); i++){
		     cout << Player::players[i] << endl ;      
	   }
	   cout << " Press [n] if you want to add a new user or [b] to go back to the main menu.\n";
	   cout << " My Choice: " << endl ;
	   cin >> choice ;
	   
	   while (validate2(choice,'n','b')){
		       cout << " invalid input, Press [n] if you want to add a new user or [b] to go back to the main menu.\n " << endl ;
	            cout << " My Choice: ";
				cin >> choice ;	   
	   }
	   if (choice[0]=='b'){
		
		    this->admin_main_menu();
		}
		else{
		     this->add_new_user();	
		}
	   
}
void Admin::add_new_user(){
	     string info[5]; // it will carry user data first name , last name , ....
	     string choice;
	     cout << " Please, choose user type from (Admin or Player)  'A' for Admin , 'P' for Player " <<endl ; 
		 cout << " My choice: ";
		 cin >> choice ;
		 while (validate2(choice , 'a','p')){
		         cout << "inavlid input,  Please, choose user type from (Admin or Player)  'A' for Admin , 'P' for Player "<< endl ;
				 cout << " My choice: ";
				 cin >> choice ;
		 }
				  cout << " First Name: " ;
				  cin  >>info[0]; 
				  cout << " Last Name: " ;
				  cin >> info[1];
				  cout << " User Name: ";
				  cin >> info[2];
				  info[3]="Admin";
				  cout << " Password: " ;
				  cin >> info[4];
			 if (choice[0]=='a' || choice[0]=='A'){	  
					Admin a (info[0],info[1],info[2],info[3],info[4]);
			 }
		 
			else {
				   Player p (info[0],info[1],info[2],info[3],info[4]);
			}
		
} 
void Admin::veiw_all_questions( vector<MCQ>mcqs , vector<TrueOrFalse>TorF , vector<Complete>complete ){
	      char letters[4]={'a','b' ,'c','d'};
	       int total_questions=Question::questions.size();
           cout << " Number of questions available:" <<total_questions<<endl ;
		   if (total_questions>0){
					cout << " MCQ Question list: (total number is : " << mcqs.size() << ")" << endl ;
					cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
					for (int i=0; i<mcqs.size();i++){
							cout << " ("<<"ID="<<mcqs[i].get_ID() <<") "<< "["<<i<<"] "<< mcqs[i].get_header()<< endl ;
							string*ptr= mcqs[i].get_choices();
							cout << "\t" ;
						  	for (int j=0; j<4 ; j++){
									cout << "\t" <<"["<<letters[j]<<"] "<< *(ptr+j); 
							}
							cout << endl ;
					} 
					cout << " ============================================================================================================= " << endl ;
					cout << " True or false Question list: " << "(total number is : " << TorF.size() << ")" << endl ;
					cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  " << endl;
					for (int i=0; i<TorF.size();i++){
							cout << " ("<<"ID="<<TorF[i].get_ID() <<") "<< "["<<i<<"] "<<TorF[i].get_header()<<"  ( Answer is : " << TorF[i].get_correct()<<" )"<< endl ;	
					}
					cout << " =============================================================================================================  " << endl ;
					cout << " complete Question list: " << "(total number is : " << complete.size() << ")" << endl ;
					cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
					for (int i=0; i<complete.size();i++){
							cout << " ("<<"ID="<<complete[i].get_ID() <<")"<< "["<<i<<"] "<< complete[i].get_header()<<"  ( Answer is : " << complete[i].get_correct()<<" )" <<endl ;	
							
					}
			
		   } 		
}
void Admin::add_new_question(){
	   string choice;	
       cout << "please, choose type of Question" << endl;
	   cout <<"\t[1] MCQ " << endl ;
	   cout <<"\t[2] Complete " << endl ;
	   cout <<"\t[3] True or False" << endl ;
	   cout << " My choice: ";
	   cin >> choice ;
	   while (validate(choice,1,3)==true){
		    cout << "please, enter number from 1 to 3 ."<< endl ;
			cout << " My choice: ";
			cin >> choice ;
	   }
	   if (choice[0]=='1'){
				add_mcq();
			
		}
		else if (choice[0]=='2'){
		     	 add_complete();
		}
		else if (choice[0]=='3'){
		       	add_TorF();
		}
		cout << " =============================================== " << endl ;
		cout << " Do you want to add another question ...? press y or n " << endl ;
		cout << "\tMy choice: " ;
		cin >> choice ;
		while (validate2(choice,'y','n')){
			     cout << " Please, hit y or n " << endl ;
				 cout << "/tMy choice: " ;
				 cin >> choice ;
		}
		if (choice[0]=='y' || choice[0]=='Y'){
				this->add_new_question();		
		}
		else {
		       this->admin_main_menu();	
		}
}
void Admin::add_mcq(){
			string correct;
			string header;
			string choices[4];
			cout << " Your question: ";
			cin.ignore();
			getline(cin,header);
			cout << " Enter choices and put * before correct one " << endl;
			for (int i=0; i<4;i++){
				cout << "\tChoice [" << i << "]: ";  
			     cin >> choices[i];	
					if (choices[i][0]=='*'){
					         correct=choices[i].substr(1,choices[i].size()-1); 
					}
			}
			MCQ q (correct,header,choices);
}
void Admin::add_TorF(){
		
		string correct;
		string header;
		string choices[2]={"T", "F"};
		cout << " Your question: ";
		cin.ignore();
		getline(cin,header);
        cout << " Enter correct answer: ";
        cin >> correct; 
		TrueOrFalse(correct,header);
	
}
void Admin::add_complete(){
        
		 string header;
		 string correct ;
		 cout << " Your question: " ;
		 cin.ignore();
		 getline(cin,header);
		 cout << " Enter the correct answer: ";
		 cin >> correct;
		 Complete(correct,header);
}
void Admin::load_questions(){
        	ifstream Questions("../exam2_questions.txt");
			string type;
			while (getline(Questions,type)){
						if (type=="MCQ"){							
								read_mcq(Questions);  
								
						}
						else if (type=="COMPLETE"){
							  read_complete(Questions);
							  
						}
						else if (type=="TF"){
							    read_TorF(Questions);
								
						}
						
		    }
		
}
 void Admin::read_mcq( ifstream &Questions){
			//cout << "\n##### Read MCQ ###### " << endl ;
			string header;
			string correct;
			string choices[4];
			getline(Questions,header);
			getline(Questions,correct);
			choices[0]="*";
			choices[0]+=correct;
			for (int i=1;i<4;i++ ){	
			      getline(Questions,choices[i]);	
			}
			MCQ(correct,header,choices);
 }
 void Admin::read_complete( ifstream &Questions){
		
            string header;
			string correct;
			getline(Questions,header);
			getline(Questions,correct);
			Complete(correct,header);
			
}
void Admin::read_TorF( ifstream &Questions){
            	
	            string header;
			    string correct;
			    getline(Questions,header);
				
			    getline(Questions,correct);
				TrueOrFalse(correct,header);
}
