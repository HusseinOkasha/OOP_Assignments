#include "TrueOrFalse.h"
#include <iostream>
#include <vector>
#include "Question.h"
using namespace std;

vector <TrueOrFalse>TrueOrFalse::TorF;
TrueOrFalse::TrueOrFalse()
{
	
}
TrueOrFalse::TrueOrFalse( const string &correct , const string &header )
: Question(correct,header){
	int check=0;
	for (int i=0;i<TorF.size();i++){
	       if (*(this)==TorF[i]){
			     check=1;
			     cout << " !!!!!!!!!!!!!!!!! This question already exists !!!!!!!!!!!!!!!!!!!! " << endl ;      
				 break;
			}
	}
	if (header.size()<1 || correct.size()<1){
			cout << " process failed due to, empty question header or no correct answer specified " << endl ; 	
	}
	else if (check==0){
			 TorF.push_back(*(this));
	         questions.push_back(*(this)); 
			 
	}
	
}
ostream& operator << (ostream &out , TrueOrFalse &q){
        out <<q.header  << endl ;
        return out ; 	
}

TrueOrFalse::~TrueOrFalse()
{
}

