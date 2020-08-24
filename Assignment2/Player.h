#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>

using namespace std;

class Player: public User {

private:
     vector <int>scores;
	 vector <int>McqScores;
	 vector <int>CompleteScores;
	 vector <int>TfScores;
	  
	
public:
	Player();
	~Player();

};

#endif // PLAYER_H
