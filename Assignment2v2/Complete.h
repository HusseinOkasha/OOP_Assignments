#ifndef COMPLETE_H
#define COMPLETE_H
#include <iostream>
#include <vector>
#include "Question.h"
using namespace std;
class Complete :public Question
{
	
public:
	static vector<Complete>complete;
	Complete();
	Complete(const string &correct ,const string &header);
	friend ostream& operator << (ostream &out , Complete &q);
	friend Question rand_Complete();
	~Complete();

};

#endif // COMPLETE_H
