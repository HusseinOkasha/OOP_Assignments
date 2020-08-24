#ifndef TRUEORFALSE_H
#define TRUEORFALSE_H
#include <iostream>
#include <vector>
#include "Question.h"
using namespace std;

class TrueOrFalse :public Question{
private:
	string choices[2]={"T","F"};
public:
	static vector<TrueOrFalse>TorF;
	TrueOrFalse();
	TrueOrFalse( const string &correct, const string &header );
	~TrueOrFalse();
	friend ostream& operator << (ostream &out , TrueOrFalse &q);
	friend Question rand_TrueOrFalse();
};

#endif // TRUEORFALSE_H
