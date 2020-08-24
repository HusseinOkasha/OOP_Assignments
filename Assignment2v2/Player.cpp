#include "Player.h"
#include "User.h"
#include "MCQ.h"
//#inlcude "Admin.h"
#include "TrueOrFalse.h"
#include "Complete.h"
#include "Question.h"
#include <iostream>
using namespace std;


Player::Player()
:McqScore{0},TorFScore{0},CompleteScore{0}{
	
}
Player::Player(string firstname,string lastname, string username,string role,string password)
	: User(firstname, lastname , username , role , password),McqScore{0},TorFScore{0},CompleteScore{0}{
		
		    if  (search(User::users,username) ){
					 cout << " This User name is already used ..." << endl;
			}
			else {
					players.push_back(*(this));
					users.push_back(*(this));
			}
			
	   
}
void Player::player_main_menu(){
	    cout << " ======================================== " << endl ;
	    string  choice; 
        cout << "\t[1] Switch accounts" << endl;
		cout << "\t[2] Update your name" << endl;
		cout << "\t[3] start new quiz " << endl;
		cout << "\t[4] Display your scores statistics" << endl;
		cout << "\t[5] Display all your scores" << endl;
		cout << "\t[6] Display details of your last 2 quizzes" << endl;
		cout << "\t[7] Exit the program " << endl;
		cout << " My choice: ";
		cin >> choice ;
		
		while (validate(choice,1,7)){
			    cout << " Enter an existing choice  " << endl;
				cout << " My choice:" << endl;
				cin >> choice ;
		}
		
		if (choice=="1"){
				cin.ignore();
		        switch_accounts();
				player_main_menu();
		}
		else if (choice=="2"){
				
		       update_UserName();
			   player_main_menu();	
		}
		
		else if (choice=="3"){
				
			     start_new_quiz();
				 this->player_main_menu();
		}
		
		
		 
		else if (choice=="4"){
               display_scores_statistics();
			    player_main_menu();
		}
		else if (choice=="5"){
			    display_all_scores();
			    player_main_menu();
		}
		else if (choice=="6"){
		     display_scores_last_two_quizes();
			 player_main_menu();
		}
		

}
void Player::print_MCQ(MCQ q , int i){
            cout << "[" << i << "]" <<q ; 	     
}
void Player::print_TrueOrFalse( Question q, int i ){
           cout <<"[" << i << "]" <<q ;	     
}
void Player::print_Complete( Question q, int i ){
            cout <<"[" << i << "]" <<q ;	     
}

Question rand_Complete(){
	 int x = rand()%Complete::complete.size();	
     return Complete::complete[x]; 		
}    
Question rand_TrueOrFalse(){
	 int x = rand()%TrueOrFalse::TorF.size();	
     return TrueOrFalse::TorF[x]; 		
}    
MCQ rand_mcq(){
	 int x = rand()%MCQ::mcqs.size();	
     return MCQ::mcqs[x]; 		
}    
void Player::start_new_quiz(){
	cout << " ======================================== " << endl ;
    if (MCQ::mcqs.size()>3 && Complete::complete.size()>1 && TrueOrFalse::TorF.size()>1){	      
			int score=0, index=0;
	        vector<Question>quiz;
			vector <MCQ>quiz_mcq;
			MCQ y;
			Question x;
			string choice,temp;
			for (int i=0; i<3 ; i++) {
				    y=rand_mcq();
					
					while (is_repeated(quiz_mcq,y)){
					       y=rand_mcq();   	
					}
					index=rand()%4;
					temp=*(y.get_choices()+index);
					y.set_choices(index,*(y.get_choices()));
					y.set_choices(0,temp);
					quiz.push_back(y);
					quiz_mcq.push_back(y);
			}
			x= rand_TrueOrFalse();
			quiz.push_back(x);
			x=rand_Complete();
			quiz.push_back(x);
			for (int i=0; i<3;i++){
			       print_MCQ(quiz_mcq[i],i+1);
				   cout << " My choice:" ;
				   cin >> choice;
				   while (validate3(choice,'a','d')){
					        cout << " !!!! Please ,enter a valid choice !!!!! "<< endl ;
							cout << " My choice:" ;
							cin >> choice;	
				    }
					choice=choice_finder(choice[0],quiz_mcq[i]);
				
					if (check(choice,quiz_mcq[i])==true){
							this->McqScore++;
							cout << this->McqScore << endl;
							score++;
					}
				
			}
			print_TrueOrFalse(quiz[3],4);
			cout << " MY choice: ";
			cin >> choice ;
			if (check(choice,quiz[3])==true){
					this->TorFScore++;
					score++;
			}
			print_Complete(quiz[4],5);
			cout << " My choice:" ;
			cin >> choice;
			if (check(choice,quiz[4])==true){
					this->CompleteScore++;	
					score++;
			}
			scores.push_back(score);
			cout << " ======================================== " << endl;
			cout << " Your Score is:"<< score << "/" << 5 << endl ;
			cout << "\t-number of correct answers is:"<< score << endl ;
			cout << "\t-number of wrong answers is:" << 5-score << endl ;
	}
	else {
	        cout << " There isn't enough Qusetion ask the admin to make sure that the Question bank has 3 MCQS ,  T/F , 1 Complete Questions ." << endl ;	
	}
	
}

bool Player::is_repeated(vector <MCQ>quiz, MCQ x){
			
         	for (int j=0; j<quiz.size();j++){
					 if (x==quiz[j]){
					          return true ;		      	
					} 	
			}
			return false;
}

bool Player::check(string choice, Question q){
         if (q.get_correct() == choice){
			 
		        	return true;
		  }	
		  return false;
}
string Player::choice_finder(char x , MCQ q ){
	       string choice ;
           if (x=='a' || x=='A'){
			   choice= *(q.get_choices());
		    }
			else  if (x=='b' || x=='B'){
			   choice= *(q.get_choices()+1);
		    }
			else  if (x=='c' || x=='C'){
			   choice= *(q.get_choices()+2);
		    }
			else {
	           choice= *(q.get_choices()+3);
			}
			return choice.substr(1,choice.size());
}
double Player::avarage (double sum , double number){
         return sum/number;	
}
int Player::max_quiz(){
	     int max=0;
          for (int i=0; i<scores.size();i++){
		            if (scores[i]>max){
					       max=scores[i];	
					}    	  
		  }
      return max;	
}
int Player::min_quiz(){
		int min=6;
		 for (int i=0; i<scores.size();i++){
		            if (scores[i]<min){
					       min=scores[i];	
					}    	  
		  }
		return min;
}

void Player::display_scores_statistics (){
	     cout << " ======================================== " << endl ;
		 if (scores.size()>0){
				double sum =0;
				for (int i=0; i<scores.size();i++){
							sum+=scores[i];
				}	
				cout << " Your score statistics per quiz  :" << endl ;
				cout << " \t-Number of quizes taken:" << scores.size() << endl ;
				cout << " \t-Heighest score is: " << max_quiz() << endl;	
				cout << " \t-Lowest score is: " << min_quiz() << endl ;
				cout << " \t-Avarage score is: " << avarage (sum,scores.size()*5) << endl;
				cout << " Your score statistics per question type is: "<< endl ;
				cout << " \t-Number of  MCQ questions is: "<< scores.size()*3 << endl ;
				cout << " \t-Number of  T/F questions is: " << scores.size() << endl ;
				cout << " \t-Number of  Complete questions is: " <<  scores.size() << endl ;
				cout << " \t-Avarage grade for MCQ questions is: " << avarage(McqScore, scores.size()*3) << endl ;
				cout << " \t-Avarage grade for T/F questions is: " << avarage(TorFScore, scores.size()) << endl ;
				cout << " \t-Avarage grade for Complete questions is: " << avarage(CompleteScore,scores.size()) << endl ;
		 }
		 else{
			 cout << " You haven't taken Quizes yet " << endl ;
		 }


}
void Player::display_all_scores(){
      cout << " ======================================== " << endl ;
		if (scores.size()>0){
				cout << " You have taken " << scores.size() << " quizes." <<endl;
				for (int i=0; i<scores.size();i++){
						cout << " \tQuiz number "<<i+1 << " : " << scores[i] <<"/5"<< endl ; 	
				}
		}
		else {
		       cout << " You haven't taken quizes yet " << endl ;
		}		
}
void Player::display_scores_last_two_quizes(){
		cout << " ======================================== " << endl ;
		if (scores.size()>1){
				cout << scores.size() << endl ;
				for (int i=scores.size()-2; i<scores.size()  ; i++){
						cout << " \tQuiz number "<< i+1 << " :" << scores[i] << endl ; 	
				}
		}
		else {
		       cout << " You haven't taken quizes yet " << endl ;
		}	
}	
Player::~Player()
{

}
