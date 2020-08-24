#ifndef PLAYER_H
#define PLAYER_H
#include "User.h"
#include <iostream>
#include "Question.h"
#include "Complete.h"
#include "TrueOrFalse.h"
#include "MCQ.h"
using namespace std;
class Player : public User 
{
private:
		vector <int>scores; // scores of Quizes
		int McqScore; // scores for MCQ questions , taken  in all Quizes
		int CompleteScore; // scores for complete questions , taken  in all Quizes
		int TorFScore; // scores for true or false questions  , taken  in all Quizes
		
public:
		Player();
		Player(string firstname,string lastname, string username,string role,string password);
		~Player();
		
		void player_main_menu();
		void start_new_quiz();
		bool is_repeated(vector <MCQ>quiz, MCQ x);
	    void print_MCQ(MCQ q , int i);
		void print_TrueOrFalse( Question q, int i );
		void print_Complete( Question q, int i );
		bool check(string choice, Question q);
		string choice_finder(char x , MCQ q );
		double avarage (double sum , double number);
		int max_quiz();
		int min_quiz();
		void display_all_scores();
		void display_scores_statistics ();
		void display_scores_last_two_quizes();
};

#endif // PLAYER_H
