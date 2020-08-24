#include "MCQ.h"
#include <iostream>
#include <vector>
#include "Question.h"
vector <Question>Question::questions;
vector<MCQ>MCQ::mcqs;
MCQ::MCQ(){}
MCQ::MCQ (const MCQ &source)
{
    this->header=source.header;
	this->correct=source.correct;
     this->ID=source.ID	;
	choices =new string[4] ;
     for (int i=0 ; i<4;i++){
	       	choices[i] =source.choices[i];
	}     	
	
}
MCQ::MCQ(const string &correct , const string& header ,  string* c )
:Question(correct,header){
	int check=0;
	choices=new string [4];
	for (int i=0; i<4;i++){
	       choices[i]= *(c+i);	
	}
	for (int i=0; i<mcqs.size();i++){
	       if (*(this)==mcqs[i]){
			    cout << "!!!!!!!! This Question already exists...!!!!!!!!!!!" << endl ;   
				check=1;
				break;
		   }	
	}
	if (header.size()<1 || correct.size()<1){
		        cout << " process failed due to, empty question header or no correct answer specified " << endl ; 	
	}
	if(has_multple_solutions(c)==false && has_repeated_choices(c)==false  && check==0){
				questions.push_back(*(this));
				mcqs.push_back(*(this));
			
	}
	else{
	      cout << " !!!!!!!!!!!!!! The process failed !!!!!!!!!!!!! , due to duplicated choices or error in specifying correct answer "<< endl;	
	}
			
}
string* MCQ::get_choices(){
	   return choices ;
}

bool MCQ::has_repeated_choices( string *choices){
	        for (int i=0; i<4;i++){
			       if (choices[i][0]== '*'){
					    choices[i].erase(0,1);
					}
			}
	         for (int i=0; i<4;i++){
			       for (int j=0; j<4;j++){
					      if (i==j){
								j++;	  
						  }
						 
                          if (*(choices+i)==*(choices+j)){
							       
							        return true;  
						   }     
					}	 
			 }
		
		return false ;	 
}
bool MCQ::has_multple_solutions(const string *choices){
	int counter=0;
				
                for (int i=0; i<4;i++){
						if (choices[i][0]=='*'){
						        counter++;
						}
					
						if (counter>1){
							
						      return true;	
						}
				}
			    if (counter==0){
					
					 return true ;
				}
				
          	
		return false ;	   	
} 
ostream& operator << (ostream &out , MCQ &q){
		 int end =0 ;
		 
		 char letters [4]={'a','b','c','d'};
         out << q.header  << endl ;
		 
         for (int i=0; i<4;i++){
			     if (q.choices[i][0]=='*'){
						end=q.choices[i].size()-1;
				     	out << "\t" <<"[" << letters[i] << "]" << q.choices[i].substr(1,end)<<"\t"; 
				}
				else{
					   out << "\t" <<"[" << letters[i] << "]" << q.choices[i]<<"\t"; 
				}
		    	 
		}
        out << endl ;
        return out ;   	
}
void MCQ::set_choices (int index, string choice){
               	*(choices+index)=choice;
}
