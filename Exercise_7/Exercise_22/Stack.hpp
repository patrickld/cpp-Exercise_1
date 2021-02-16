#ifndef Stack_hpp
#define Stack_hpp
#include <stdio.h>
#include <iostream>
#include <vector> 
#include "Stack_1.hpp"
using namespace std;

template <typename T> class Stack:StackI<T>{
  protected:
    int numOfElems;
    int topindex;
    int size;
    T s [0];
  public:
    Stack(){
      s [20];
      topindex = 0;
      numOfElems = 0;
      size = 20;
    }
    
    Stack(int n){ 
      s[n];
      topindex = 0;
      numOfElems = 0;
      size =n;
    }

    void push(T t){
      if (numOfElems>=0 && numOfElems<size){
        s [topindex++]=t;
        numOfElems++;
      }
    }

    void pop(){
      if (numOfElems>0){
        --topindex;
        --numOfElems;
      }
    }

    T top(){
      if (numOfElems>0){
        return s[topindex];
      }
      else
        return s[0];
    }

    bool isEmpty(){
      if (numOfElems == 0)
        return true;
      else
        return false;
    }

    void print(){
      cout << "\t" << endl;
      if (numOfElems==0){
        std :: cout << "Stack is empty" << endl;
      }
      else {
        for(int i = topindex-1;i>=0;i--){
          if (i == topindex-1)
            cout << "The top of the stack is: ";
          else
            cout << "                         " ; cout << s[i] << endl;
        }
      }
      cout << "\t" << endl << endl;
    }
    
};

#endif