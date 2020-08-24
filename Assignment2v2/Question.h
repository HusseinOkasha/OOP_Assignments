#ifndef QUESTION_H
#define QUESTION_H
#include <iostream>
#include <vector>


using namespace std;
class Question
{
protected:
  int ID;
  string correct ;
  string header;	
public:
	static int counter; // increamented if we create any question.
    static vector <Question>questions;
	string get_header();
	string get_correct();
	friend bool operator==(const Question &x, const Question &y);
	int get_ID();
	Question(const string &correct, const string &header);
	Question();
	 friend ostream& operator << (ostream &out , Question &q);
	
	~Question();

};

#endif // QUESTION_H
