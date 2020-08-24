#include <iostream>
#include "FciVector.h"
using namespace std;

int main()
{
    string a [4]={"mmm","lll","jjj", "kkk"};
	FciVector<string>x(a,4);
    x.push_back("Hussein");
    x.push_back("Okasha");
    x.push_back("7amada");
   /* 
    x.insert(x.begin()+4,"Hello");
    x.insert(x.begin(),"Okasha");
    x.insert(x.begin()+6,"Mohammed");
    x.insert(x.begin()+8,"7amda");
     for (auto it = x.begin(); it!=x.end();it++){
             cout << *it << endl ;    
    }*/
   /* x.pop_back();
    cout << x[7] << endl ;
    cout << x.size() << endl ;
    for (auto it = x.begin(); it!=x.end();it++){
             cout << *it << endl ;    
    }*/
    /*
    x.clear();
    cout <<x.size() << endl;
    cout << x[3] << endl ;
     */
    // x.erase(x.begin()+1);
     //x.erase(x.begin()+1);
        cout << x.size() << endl;
    x.insert(x.begin()+1,"lll");
     for(auto it = x.begin(); it!=x.end();it++){
            cout << *it << endl ;    
    }

	return 0;
}
