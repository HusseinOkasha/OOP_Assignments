#ifndef FCIVECTOR_H
#define FCIVECTOR_H
#include<iostream>
using namespace std;
template<typename T>
class FciVector
{
private:
     T *elements;
      int numberOfElements ;
      int capacity;  
public:
    
    FciVector();
    FciVector(T *elements ,int numberOfElements );
    int size();
    int get_capacity();
    bool empty();
    T& operator[](int index);
    T* begin();
    T& front();
    T& back();
    T* end();
    void insert (T* position , T val);
    void push_back(T val);
    void pop_back();
    void clear();
    void erase (T* position);
    ~FciVector();

};
#include "FciVector.cpp"

#endif // FCIVECTOR_H
