#include "Complete.h"
#include <iostream>
#include <vector>
#include "Question.h"

vector<Complete>Complete::complete;
Complete::Complete()
{
}
Complete::Complete(const string &correct ,const string &header)
:Question(correct,header){
	   int check=0;
        for (int i=0; i<complete.size(); i++ ){
		        if (*(this)==complete[i]){
				        check=1;
						break;
			     }	
		}
		if (check==1){
				cout << " !!!!!!!!!!!!!!!!!!!!!!! This question already exists !!!!!!!!!!!!!!!!!!!!! "  << endl;
		}
		if (header.size()<1 || correct.size()<1){
		        cout << " process failed due to, empty question header or no correct answer specified " << endl ; 	
		}
         else{
				complete.push_back(*(this));
				questions.push_back(*(this));
		}	
}
ostream& operator << (ostream &out , Complete &q){
           out << q.header << endl ;
           return out ;	
}
Complete::~Complete()
{
}

