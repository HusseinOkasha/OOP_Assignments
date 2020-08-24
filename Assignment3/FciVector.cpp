#include "FciVector.h"
#include <iostream>
using namespace std;
template <typename T>
FciVector<T>::FciVector(){
          elements= new T[5];
          numberOfElements=0;
           capacity=5;  
}
template <typename T>
FciVector<T>::FciVector(T *elements, int numberOfElements)
{
    this->elements=new T [numberOfElements] ;
    this->elements=elements;
    this->numberOfElements=numberOfElements;
    this->capacity=numberOfElements;

   
}
template <typename T>
int FciVector<T>::size(){
      return numberOfElements;     
}
template <typename T>
int FciVector<T>::get_capacity(){
        return capacity;    
}
template <typename T>
bool FciVector<T>::empty(){
    if (numberOfElements>0){
         return false ;    
    }
    return true;
}
template <typename T>
T& FciVector<T>::operator [](int index){
         return *(elements+index);  
}  
template <typename T>
T* FciVector<T>::begin(){
      return elements;       
} 
template <typename T>
T* FciVector<T>::end(){
        return elements+numberOfElements;     
}
template <typename T>
T& FciVector<T>::back(){
       return *(elements+numberOfElements-1);      
}
template <typename T>
T& FciVector<T>::front(){
      return *(elements);      
}
template<typename T>
void  FciVector<T>::insert(T* position , T Val ){
          int p=position-begin(); 
          if (this->size()==capacity){
              T temp[this->size()];
               for (int i=0; i<size();i++){
                      temp[i]=*(elements+i);
               }
              elements= nullptr;
              this->elements=new T[this->size()*2];
              for (int i=0 ;i<size();i++){
                      elements[i]=temp[i]; 
               }
              capacity*=2;
          }
           position=begin()+p;
          for (auto it=this->end()-1; it!=position-1; it--){
                 
                  *(it+1)=*it;      
                 
                   /*for (auto it=begin(); it!=end()+1 ; it++){
                        cout << *(it) << endl ;                
                    }*/
          }
          
              
          *(position)=Val ;
           numberOfElements++; 
}
template <typename T>
void FciVector<T>::push_back(T val){
        if (this->size()==capacity){
              if (size()>0){
                    T temp[size()];
                    for (int i=0; i<size();i++){
                            temp[i]=*(elements+i);
                 
                    }    
                    elements=nullptr;
          
                    this->elements=new T[size()*2];
               
                    for (int i=0; i<size();i++){
                            elements[i]=temp[i]; 
                     
                    }
            }    
               
                capacity*=2;        
          }
           *(elements+size())=val;
             numberOfElements++;  
}
template <typename T>
void FciVector<T>::pop_back(){
        numberOfElements--;                                                                                                 
} 
template <typename T>
void FciVector<T>::clear(){
      numberOfElements=0;
}
template <typename T>
void FciVector<T>::erase(T* position){
         for (auto it=position; it!=end()-1; it++){
                  *(it)=*(it+1);   
         }       
         numberOfElements--;
}
/*void TemporaryFunction ()
{
    int a [10]={1,2,3,4,5,6,7,8,9,10};
    string s[10];
    FciVector<int>TempObj(a,10,10);
    FciVector<string>TempOj(s,10,10);
}*/
template<typename T>
FciVector<T>::~FciVector()
{
    delete []elements;
}

