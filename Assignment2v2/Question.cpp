#include "Question.h"
#include <iostream>
#include <vector>

using namespace std;
int Question::counter=0;
Question::Question(const string &correct, const string &header){
               
			   this->correct=correct;
			   this->header=header;
			   ++counter;
			   this->ID=counter;
}
Question::Question(){
	
}
bool operator==(const Question &x, const Question &y){
	   //  cout << " !!! " << x.header <<" !!!" << endl;
		 //cout << " !!! " << y.header <<" !!!" << endl;
           if (x.header==y.header){
			         return true;   
			}
		return false ;
}

string Question::get_header(){
	     return  this->header;	
}		
string Question::get_correct(){
	     return  this->correct;	
}
 int Question::get_ID(){
       return this->ID;	 
}
ostream& operator << (ostream &out , Question &q){
               out << q.header << endl ;
         return out ;	
}

Question::~Question(){}