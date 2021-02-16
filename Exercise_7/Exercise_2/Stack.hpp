#ifndef Stack_hpp
#define Stack_hpp
#include <stdio.h>
#include <iostream>
#include <vector> 
#include "Stack_1.hpp"
using namespace std;

template <typename T> 
class Stack: public:StackI<T>{
  protected:
    int topindex;
    int numOfElements;
    int size;
    T s [];
  public:
    Stack(){
      s [20];
      topindex = 0;
      numOfElements = 0;
      size = 20;
    }
    Stack(int n){ 
      s[n];
      topindex = 0;
      numOfElements = 0;
      size =n;
    }

    void push(T t){
      if (numOfElements>=0 && numOfElements<size){
        s [topindex++]=t;
        numOfElements++;
      }
    }

    void pop(){
      if (numOfElements>0){
        −−topindex;
        −−numOfElements;
      }
    }

    T top(){
      if (numOfElements>0){
        return s[topindex];
      }
      else
        return s.at(0);
    }

    void print(){
      cout << "−−−" << endl;
      if (numOfElements==0){
        std :: cout << "Stack is empty" << endl;
      }
      else {
        for(int i = topindex − 1;i>=0;i−−){
          if (i == topindex − 1)
            cout << "The top is \t";
          else
            cout << "\t\t" ; cout << s[i] << endl;
        }
      }
      cout << "−−−" << endl << endl;
    }
    
    bool isEmpty(){
      return (numOfElements==0)? true : false;
    }
};

#endif