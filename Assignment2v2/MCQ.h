#ifndef MCQ_H
#define MCQ_H
#include <iostream>
#include <vector>
#include "Question.h"
using namespace std;

class MCQ :public Question{
private:
	string *choices;	 
public:
	static vector<MCQ>mcqs;  
    MCQ();
	MCQ( const string &correct , const string &header ,  string* choices );
	MCQ (const MCQ &source);
	string* get_choices();
	void set_choices (int index, string choice);
	bool has_repeated_choices(string *choices);
	bool has_multple_solutions(const string *choices);
    friend MCQ rand_mcq(); 
	friend ostream& operator << (ostream &out , MCQ &q);

};

#endif // MCQ_H
