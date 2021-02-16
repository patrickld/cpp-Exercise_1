#ifndef patient_hpp 
#define patient_hpp
#include <stdio.h>
#include <iostream> 
#include <vector> 
#include "bloodpressure.hpp" 
#include "date.hpp" 
using namespace std;

class Patient{
  protected:
    string name;
    vector<Blood> table;
  public:
    Patient(string);
    void addRecord(Blood);
    void print();
    void printReport();
};
#endif